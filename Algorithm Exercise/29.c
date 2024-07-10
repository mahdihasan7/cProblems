#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == 13 )
    {
        printf("0\n");
    }
    else if (b == 13)
    {
        printf("%d\n", a);
    }
    else if (c == 13)
    {
        printf("%d\n", a + b);
    }
    
    else
    {
        printf("%d\n", a + b + c);
    }
}