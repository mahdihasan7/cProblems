#include <stdio.h>

int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    
    int array[n];
    printf("%d number of elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && array[i] == 5 && array[i + 1] == 5)
        {
            found++;
        }
        
    }
    if (found > 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
    return 0;
}