#include <stdio.h>

int main(void)
{
    int a, b, sum, diff;
    printf("Two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    diff = a - b;
    if (a == 5 || b == 5 || sum == 5 || diff == 5)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
}