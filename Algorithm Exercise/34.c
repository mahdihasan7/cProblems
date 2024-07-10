#include <stdio.h>

int main(void)
{
    int x, y;
    printf("The lenght of two integers: ");
    scanf("%d %d", &x, &y);
    int array1[x], array2[y];
    printf("The first array of integers: ");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("The second array of integers: ");
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &array2[i]);
    }
    if (array1[0] == array2[0] || array1[x - 1] == array2[y - 1])
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}