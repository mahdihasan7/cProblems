#include <stdio.h>

int main(void)
{
    //taking total number of elements
    int n;
    printf("The number of elements: ");
    scanf("%d", &n);
    //taking n number of elements
    int array[n];
    printf("Give %d number of integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    // giving output of reversed order
    printf("Given array in reverse: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
    return 0;
}