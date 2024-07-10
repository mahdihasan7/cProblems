#include <stdio.h>

int main(void)
{
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    if (a == 30 || b == 30 || sum == 30) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
}