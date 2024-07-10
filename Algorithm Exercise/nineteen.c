#include <stdio.h>

int main(void)
{
    int n;
    printf("Integer: ");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 7 == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}