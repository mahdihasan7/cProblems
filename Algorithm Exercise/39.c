#include <stdio.h>

int main(void)
{
    //taking size of array
    int n;
    printf("Total elements of the array: ");
    scanf("%d", &n);
    
    //taking inputs of array
    int array[n];
    printf("Give %d number of elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    //giving output
    int c = array[0];
    int d = array[n - 1];
    int array1[2] = {c, d};
    printf("%d %d", array1[0], array1[1]);

    return 0;
}