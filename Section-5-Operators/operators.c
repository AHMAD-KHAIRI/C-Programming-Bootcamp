#include <stdio.h>
#include <stdlib.h>

// Example of arithmetic operators:
// - / * % ++ -- <= >= == != >> && + || *= < %= ~ << /= ^ | += !

int main()
{
    // using int:
    // int a, b, c;

    // printf("Enter A operand (int): ");
    // scanf("%d", &a);

    // printf("Enter B operand (int): ");
    // scanf("%d", &b);
    // printf("\n");

    // c = a + b;
    // printf("c = a + b --> %d\n", c);

    // c = a - b;
    // printf("c = a - b --> %d\n", c);

    // c = a * b;
    // printf("c = a * b --> %d\n", c);

    // c = a / b;
    // printf("c = a / b --> %d\n", c);

    // // calculate remainder
    // c = a % b;
    // printf("c = a %% b --> %d\n", c);

    // using float:
    float a, b, c;

    printf("Enter A operand (float): ");
    scanf("%f", &a);

    printf("Enter B operand (float): ");
    scanf("%f", &b);
    printf("\n");

    c = a + b;
    printf("c = a + b --> %9.3f\n", c);

    c = a - b;
    printf("c = a - b --> %9.3f\n", c);

    c = a * b;
    printf("c = a * b --> %9.3f\n", c);

    c = a / b;
    printf("c = a / b --> %9.3f\n", c);

    // remainder cannot be calculated with floating numbers
    // c = a % b;
    // printf("c = a %% b --> %9.3f\n", c);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}