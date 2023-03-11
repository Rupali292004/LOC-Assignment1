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