
#include <stdio.h>
int main()
{
    float r;
    printf("Enter the radius: \n");
    scanf("%f", &r);
    const float pi = 3.14;

    printf("the diameter is %f \n", 2 * r);
    printf("the circumference is %f \n", 2 * pi * r);
    printf("The area is %f.\n", pi * r * r);
}
 BIN +40.5 KB 
Coding/C/five.exe
Binary file not shown.
 33  
Coding/C/four.c
@@ -0,0 +1,33 @@
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
 BIN +40.5 KB 
Coding/C/four.exe
Binary file not shown.
 15  
Coding/C/one.c
@@ -0,0 +1,15 @@
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
}
 BIN +40.4 KB 
Coding/C/one.exe
Binary file not shown.
 13  
Coding/C/three.c
@@ -0,0 +1,13 @@
#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    do
    {
        sum = sum + (n % 10);
        n = n / 10;
    } while (n != 0);

    printf("%d", sum);
}
 BIN +40.4 KB 
Coding/C/three.exe
Binary file not shown.
 13  
Coding/C/two.c
@@ -0,0 +1,13 @@
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n > 0)
        printf("Positive\n");
    else if (!(n > 0))
        printf("Negative\n");
    else
        printf("Zero\n");
}
 