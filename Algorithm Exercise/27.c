#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Two integers: ");
    scanf("%d %d", &a, &b);
    if ((a > 10 && a < 99) && (b > 10 && b < 99))
    {
        if (a % 10 == b % 10)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    
    return 0;
    
}