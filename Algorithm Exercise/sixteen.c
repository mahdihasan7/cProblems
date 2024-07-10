#include <stdio.h>

int main(void)
{
    int a, b, sum;
    printf("Two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    if (sum >= 10 && sum <= 20)
    {
        printf("30\n");
    }
    else
    {
        printf("%d\n", &sum);
    }
    return 0;
}