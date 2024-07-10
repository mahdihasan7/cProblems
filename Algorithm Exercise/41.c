#include <stdio.h>

int main(void)
{
    int n = 2;
    int array[n];

    printf("Two integers: ");
    scanf("%d %d", &array[0], &array[1]);

    if ((array[0] != 15 && array[0] != 20) && (array[1] != 15 && array[1] != 15))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}