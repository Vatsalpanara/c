#include <stdio.h>

int main() {
    double num1, num2, product;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Input the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate the product
    product = num1 * num2;

    // Display the result
    printf("The product of %.2lf and %.2lf is %.2lf\n", num1, num2, product);

    return 0;
}