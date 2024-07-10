#include <stdio.h>

int main(void)
{
    int a, b, sum;
    printf("Enter two integers: ", a, b);
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("%d\n", sum);
    printf("%d\n", sum * 3);
}