#include <stdio.h>

int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("%d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] <= 0)
        {
            printf("0\n");
        }
        
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("Sum of the array: %d", sum - 17);
}