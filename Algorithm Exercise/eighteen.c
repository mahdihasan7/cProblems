#include <stdio.h>

int main(void)
{
    int a;
    printf("Integer: ");
    scanf("%d", &a);
    if (a % 13 == 0 || a % 13 == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}