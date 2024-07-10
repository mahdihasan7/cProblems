#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b == c || b + c == a || a + c == b)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
}