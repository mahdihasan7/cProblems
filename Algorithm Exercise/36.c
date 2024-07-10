#include <stdio.h>

int main(void)
{
    int n;
    printf("The number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Give %d number of elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    //shifting the array from left to right
    int first = array[0];
    for (int i = 0; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[n - 1] = first;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}