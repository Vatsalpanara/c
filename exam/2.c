#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (k = rows - i + 1; k <= rows; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
}