#include <stdio.h>

int main(void)
{
    const int n = 2;
    int array[n];
    printf("Give 2 integers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    //check if the array contains 15 or 20
    if ((array[0] == 15 || array[1] == 20) || (array[0] == 20 || array[1] == 15))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}