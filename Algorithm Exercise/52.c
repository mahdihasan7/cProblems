#include <stdio.h>

int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("%d number of elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && array[i] == 5 && array[i + 1] == 6)
        {
            array[i] = 0;
            array[i + 1] = 0;
        }
        sum += array[i];
    }
    printf("Sum of the integers: %d", sum);
    return 0;
}