#include <stdio.h>

int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("The odd array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int largest = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
        
    }
    printf("Largest Element: %d\n", largest);
    return 0;
}