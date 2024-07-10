#include <stdio.h>

int main(void)
{
    int a, b;
    printf("two integers: ");
    scanf("%d %d", &a, &b);
    if ((a >= 40 && a <= 50) || (b >= 40 && b <= 50) || ((a >= 50 && a <= 60) && (b >= 50 && b <= 60)))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
}