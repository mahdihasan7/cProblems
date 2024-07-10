#include <stdio.h>

int main(void)
{
    int n;
    printf("Sizeof array: ");
    scanf("%d", &n);
    int array[n];
    printf("The array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int first = array[0];
    int last = array[n - 1];
    int array1[2] = {first, last};
    printf("%d %d", first, last);
    
}