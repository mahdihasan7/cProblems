#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Two integers: ");
    scanf("%d %d", &x, &y);
    if (x > 13 && y > 13)
    {
        printf("0\n");
    }
    else if (x <= 13 && y > 13)
    {
        printf("%d", &x);
    }
    else if (y <= 13 && x > 13)
    {
        printf("%d", &y);
    }
    else
    {
        if (x > y)
        {
            printf("%d", x);
        }
        else if(y > x)
        {
            printf("%d", y);
        }
    }
}