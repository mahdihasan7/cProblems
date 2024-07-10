#include <stdio.h>

int main(void)
{
    int n;
    printf("Give the total number of integers: ");
    scanf("%d", &n);
    int array[n];
    printf("Give an array of integers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    if (array[0] == array[n - 1])
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}