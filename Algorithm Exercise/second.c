#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, result;
    printf("Enter a number: ");
    scanf("%d", &x);
    result = abs( 51 - x);
    printf("%d\n", result);
    if (x > 51)
    {
        printf("%d\n", result * 3);
    }
    
}