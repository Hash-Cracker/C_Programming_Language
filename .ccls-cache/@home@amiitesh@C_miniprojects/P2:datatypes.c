#include <stdio.h>

int main() {
    int a = 10; // integer datatype and initialization (-2,147,483,648 to 2,147,483,647)
    float b = 3.14; // float datatype
    double c = 3.14159265359; // double datatype
    char d = 'A'; // Character datatype to store singe characters
    // To store a string in C, we have to declare a array and print the string
    char str[20] = "Hello World\0"; // \0 specifies the end of the string
    short e = 3422; // (-32,768 to 32,767) is the range of short
    long long f = 123456870987L; // (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,808) is the range of long datatype
    
    printf("String: %s\n", str); // Everytime we need to print a variable with strings, we have to use a format specifier and at the last specify the variable of the datatype that is to be printed
    printf("int: %d\n", a);
    printf("float: %.2f\n", b); // The %.2f is used for the precision after the decimal point.
    printf("double: %.11f\n", c); // Double is nothing but float but with more precision meaning more number are allowed after the decimal
    printf("char: %c\n", d);
    printf("Long: %lld\n", f);
    printf("Short: %hd\n", e);
    return 0;
}
// In the upcoming files I will be discussing about macro in C or also called C preprocessor
