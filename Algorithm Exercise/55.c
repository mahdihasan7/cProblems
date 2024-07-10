#include <stdio.h>

int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);

    // Check if the size is positive
    if (n <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1;
    }

    int array[n];
    printf("The array with %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int fives = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == 5) {
            fives++;
            sum+= 5;
        }
    }

    if (sum == 15) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
