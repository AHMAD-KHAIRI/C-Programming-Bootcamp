#include <stdio.h>
#include <stdlib.h>

// 35. Increment and Decrement Operators
// Unary operators: ++ --
// Post - Increment / Decrement: B = A++ / A--
// Pre - Increment / Decrement: B = ++A / --A

int main()
{
    printf("\nUsing float:\n");
    float c, d;

    c = 3.14;
    d = c++;

    printf("After Post-Increment:\n");
    printf("c: %.2f\n", c);
    printf("d: %.2f\n", d);

    c = 3.14;
    d = ++c;

    printf("After Pre-Increment:\n");
    printf("c: %.2f\n", c);
    printf("d: %.2f\n", d);
    
    printf("\nUsing int:\n");
    int a, b;

    a = 0;
    // b = a++;
    b = a++ * 2 + 1;

    printf("After Post-Increment:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    a = 0;
    // b = ++a;
    b = ++a * 2 + 1;

    printf("After Pre-Increment:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}

/*
// 34. Arithmetic operators:
// Examples: - / * % ++ -- <= >= == != >> && + || *= < %= ~ << /= ^ | += !
// Binary operators: + - * / %

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
*/