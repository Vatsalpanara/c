#include <stdio.h>

int main() {
    int x, y, result;

    // Input values for x and y
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Calculate the result using the formula (x+y)*3
    result = (x + y) * 3;

    // Print the result
    printf("The result of the formula (%d + %d) * 3 is %d\n", x, y, result);
}
