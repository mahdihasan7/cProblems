#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a >= 20 && a <= 50) || (b >= 20 && b <= 50) || (c >= 20 && c <= 50))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
}