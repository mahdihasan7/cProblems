#include <stdio.h>

int main(void)
{
    int n, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d number of elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("%d\n", sum);
}