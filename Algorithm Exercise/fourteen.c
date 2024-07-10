#include <stdio.h>

int main(void)
{
    int size;
    printf("The number of elements: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }

    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if ( nums[i] == 5 && (nums[i + 1] == 5 || nums[i +1] == 6))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}