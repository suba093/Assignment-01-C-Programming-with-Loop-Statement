#include <stdio.h>

int main() {
    int rows, i, j, value;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

        for (i = 0; i < rows; i++) {

        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }


        value = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
