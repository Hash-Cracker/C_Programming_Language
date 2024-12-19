#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <arpa/inet.h>

#define ALLOWED_SRC_IP "192.168.1.100"

unsigned short checksum(void *b, int len) {
    unsigned short *buf = b;
    unsigned int sum = 0;
    unsigned short result;

    for (sum = 0; len > 1; len -= 2) {
        sum += *buf++;
    }

    if (len == 1) {
        sum += *(unsigned char *)buf;
    }

    sum = (sum >> 16) + (sum & 0xFFFF);
    sum += (sum >> 16);
    result = ~sum;
    return result;
}

void print_packet(struct iphdr *ip_header, struct tcphdr *tcp_header) {
    struct in_addr src_ip, dest_ip;
    src_ip.s_addr = ip_header->saddr;
    dest_ip.s_addr = ip_header->daddr;
    printf("Source IP: %s, Destination IP: %s\n", inet_ntoa(src_ip), inet_ntoa(dest_ip));
    printf("Protocol: %u, Source Port: %u, Destination Port: %u\n", ip_header->protocol, ntohs(tcp_header->source), ntohs(tcp_header->dest));
}

int filter_packet(struct iphdr *ip_header, struct tcphdr *tcp_header) {
    struct in_addr src_ip;
    src_ip.s_addr = ip_header->saddr;

    if (strcmp(inet_ntoa(src_ip), ALLOWED_SRC_IP) != 0) {
        printf("Packet dropped: Source IP %s is not allowed\n", inet_ntoa(src_ip));
        return 0; // Drop packet
    }

    if (ip_header->protocol == IPPROTO_TCP) {
        if (ntohs(tcp_header->dest) == 80 || ntohs(tcp_header->dest) == 22) {
            return 1; // Allow packet
        }
    }

    printf("Packet dropped: Port not allowed\n");
    return 0; }

int main() {
    int sockfd;
    struct sockaddr_in source_socket_address, dest_socket_address;
    unsigned char *packet = malloc(65536);  // Buffer to store packet data

    sockfd = socket(AF_INET, SOCK_RAW, IPPROTO_TCP);
    if (sockfd < 0) {
        perror("Socket creation failed");
        return 1;
    }

    while (1) {
        ssize_t packet_size = recv(sockfd, packet, 65536, 0);
        if (packet_size < 0) {
            perror("Failed to capture packet");
            return 1;
        }

        struct iphdr *ip_header = (struct iphdr *)(packet + sizeof(struct ethhdr)); // Skip Ethernet header
        struct tcphdr *tcp_header = (struct tcphdr *)(packet + sizeof(struct ethhdr) + sizeof(struct iphdr));

        print_packet(ip_header, tcp_header);

        if (filter_packet(ip_header, tcp_header)) {
            printf("Packet allowed\n");
        } else {
            printf("Packet dropped\n");
        }
    }

    close(sockfd);
    return 0;
}

