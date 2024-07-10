#include <stdio.h>

int main(void)
{
    const int n = 3;
    int sum1 = 0;
    int sum2 = 0;
    int array1[n];
    printf("Give the first array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);

        sum1 += array1[i];
    }
    int array2[n];
    printf("Give the second array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);

        sum2 += array2[i];
    }
    if (sum1 > sum2)
    {
        printf("%d %d %d", array1[0], array1[1], array1[2]);
    }
    else if (sum1 < sum2)
    {
        printf("%d %d %d", array2[0], array2[1], array2[2]);
    }
    
}