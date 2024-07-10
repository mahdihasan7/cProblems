#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Two integers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d", a);
    }
    else if (b > a)
    {
        printf("%d", b);
    }
    else if (a == b)
    {
        printf("0\n");
    }
    else if (a % 5 == b % 5)
    {
        if (a > b)
        {
        printf("%d", a);
        }
        else if (b > a)
        {
        printf("%d", b);
        }
    }
}