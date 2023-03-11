#include <stdio.h>
int main()
{
    int a, b;
    char c;
    printf("Enter the operation: ");
    scanf("%c", &c);
    printf("Enter the numbers:");
    scanf("%d %d", &a, &b);

    switch (c)
    {
    case '+':
        printf("The sum of %d and %d is %d\n", a, b, a + b);
        break;
    case '-':
        printf("The difference of %d and %d is %d\n", a, b, a - b);
        break;
    case '*':
        printf("The product of %d and %d is %d\n", a, b, a * b);
        break;
    case '/':
        if (b == 0)
            printf("Not Defined\n");
        else
            printf("The quotient of %d and %d is %d\n", a, b, a / b);
        break;

    default:
        printf("Invalid Input");
        break;
    }
}