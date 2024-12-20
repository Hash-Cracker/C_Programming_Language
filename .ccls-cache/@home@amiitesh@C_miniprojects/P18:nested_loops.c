
#include <stdio.h>

int main() {
    int rows;
    int col;
    char sym;

    printf("Enter the symbol: ");
    scanf(" %c", &sym);  // Note the space before %c to handle any trailing newline

    printf("Enter the rows: ");
    scanf("%d", &rows);

    printf("Enter the columns: ");
    scanf("%d", &col);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= col; j++) {
            printf("%c", sym);
        }
        printf("\n");
    }

    return 0;
}
