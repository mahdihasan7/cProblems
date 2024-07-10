#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("Three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x % 10 == y % 10 == z % 10)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}