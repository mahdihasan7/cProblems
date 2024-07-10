#include <stdio.h>

int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("The array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int array1[3];
    array1[0] = array[n / 2 - 1];
    array1[1] = array[n / 2];
    array1[2] = array[n / 2 + 1];
    printf("%d %d %d", array1[0], array1[1], array1[2]);
}