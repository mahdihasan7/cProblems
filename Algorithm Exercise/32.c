#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Three integers(Smallest to Largest): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a - b == b - c)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}