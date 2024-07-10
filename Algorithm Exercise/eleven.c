#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Two integers: ");
    scanf("%d %d", &a, &b);
    if((a >= 20 && a <= 30) && (b >= 20 && b <= 30))
    {
        if(a > b)
        {
            printf("%d\n", a);
        }
        else if (b > a)
        {
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", a);
        }
    }
    else if (a >= 20 && a <= 30)
    {
        printf("%d\n", a);
    }
    else if (b >= 20 && b <= 30)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}