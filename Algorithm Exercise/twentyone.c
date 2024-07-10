#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Two integers: ");
    scanf("%d %d", &x, &y);
    if (x >= 10 && x <= 20 || y >= 10 && y <= 20)
    {
        printf("18\n");
    }
    else
    {
        printf("%d\n", x + y);
    }
    
}