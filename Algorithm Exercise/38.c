#include <stdio.h>

int main(void)
{
    // taking total size of array
    int a, b;
    printf("Total elements: ");
    scanf("%d %d", &a, &b);

    //taking inputs of arrays
    int array1[a], array2[b];
    printf("The first %d number of integers: ", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("The second %d numer of integers: ", b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &array2[i]);
    }
    
    //creating new array using the middle element of two arrays
    int c = array1[a / 2];
    int d = array2[b / 2];
    int array3[2] = {c , d};
    printf("%d %d\n", array3[0], array3[1]);

    return 0;
}