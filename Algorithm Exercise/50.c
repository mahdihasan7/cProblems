#include <stdio.h>

int main(void)
{
    int n, count;
    printf("Size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("The array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            count++;
        }
        
    }
    printf("%d\n", count);
    return 0;
}