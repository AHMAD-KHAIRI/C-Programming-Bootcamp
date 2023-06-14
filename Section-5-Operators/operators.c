#include <stdio.h>
#include <stdlib.h>

// 37. Logical Operators
// Examples: && (AND), || (OR), ! (NOT)
// Truth table:
// x    y   x AND y     x OR y      NOT x
// 0    0      0           0         1
// 1    0      0           1         0
// 0    1      0           1         1
// 1    1      1           1         0

// we need this header file if we want to define variables of type bool and to use true and false markers
#include <stdbool.h>

int main()
{
    printf("Truth Table\n");
    printf("------------------------------\n");
    printf("| x | y | x AND y | x OR y | NOT x |\n");
    printf("------------------------------\n");

    bool x, y;
    x = 0;
    y = 0;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);
    x = 1;
    y = 0;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);
    x = 0;
    y = 1;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);
    x = 1;
    y = 1;
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);

    printf("\n\n=== AK_Codes ===\n\n");
    return EXIT_SUCCESS;
}

/*
// 36. Relational Operators
// A [relation] B
// - Evaluated to 1 if true
// - Evaluated to 0 if false

int main()
{
    // using char
    char a = 'a';
    char b = 'z';

    printf("Enter operand A (char): ");
    scanf("%c\n", &a);

    printf("Enter operand B (char): ");
    scanf(" %c", &b);
    printf("\n");

    printf("A = %c\n", a);
    printf("B = %c\n", b);
    printf("\n");

    // test out all relational operators
    printf("A == B --> %d\n", a == b);
    printf("A != B --> %d\n", a != b);
    printf("A > B --> %d\n", a > b);
    printf("A < B --> %d\n", a < b);
    printf("A >= B --> %d\n", a >= b);
    printf("A <= B --> %d\n", a <= b);
    
    
    // using int
    // int a, b;

    // printf("Enter operand A (int): ");
    // scanf("%d", &a);

    // printf("Enter operand B (int): ");
    // scanf("%d", &b);
    // printf("\n");

    // // test out all relational operators
    // printf("A == B --> %d\n", a == b);
    // printf("A != B --> %d\n", a != b);
    // printf("A > B --> %d\n", a > b);
    // printf("A < B --> %d\n", a < b);
    // printf("A >= B --> %d\n", a >= b);
    // printf("A <= B --> %d\n", a <= b);

    printf("\n\n=== AK_Codes ===\n\n");
    return EXIT_SUCCESS;
}


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