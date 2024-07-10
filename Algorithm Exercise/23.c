#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("Three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (y > x && z > y)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
}