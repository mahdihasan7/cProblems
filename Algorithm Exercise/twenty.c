#include <stdio.h>

int main(void)
{
    int n;
    printf("Integer: ");
    scanf("%d", &n);
    if (n % 10 == 2 || n % 10 == 8)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
}