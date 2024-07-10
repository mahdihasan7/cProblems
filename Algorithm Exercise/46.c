#include <stdio.h>

int main(void)
{
    const int n = 3;
    int array1[n];
    int array2[n];
    int array3[n * 2];
    printf("The first array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);

        array3[i] = array1[i];
    }
    printf("The second array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);

        array3[i] = array2[i];
    }
    
    for (int i = 0; i < n * 2; i++)
    {
        printf("%d ", &array3[i]);
    }
    printf("\n");
    return 0;
}