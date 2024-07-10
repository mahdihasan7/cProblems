#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Two integers: ");
    scanf("%d %d", &a, &b);
    if(a > 100 && a < 200 || b > 100 && b < 200)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}