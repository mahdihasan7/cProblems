#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b)
    {
        printf("%d", c);
    }
    else if (b == c)
    {
        printf("%d", a);
    }
    else if (c == a)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", a + b + c);
    }
}