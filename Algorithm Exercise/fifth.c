#include <stdio.h>

int main(void)
{
    int y;
    printf("Integer: ");
    scanf("%d", &y);
    if (y % 3 == 0 || y % 7 == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
}