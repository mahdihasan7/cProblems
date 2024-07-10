#include <stdio.h>

int main(void)
{
    int array[3];
    printf("Give 3 integers: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (array[i] == 5 && array[i + 1] == 7)
        {
            array[i + 1] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    return 0;
}