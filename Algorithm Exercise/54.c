#include <stdio.h>

int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("The %d number of elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 5 || array[i] == 7)
        {
            count++;
        }
        
    }
    if (count > 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}