#include <stdio.h>

int main(void)
{
    int size;
    printf("The size of array: ");
    scanf("%d", &size);

    int nums[size];
    printf("The array: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        if ( nums[i] == nums[i + 1] && nums[i + 2] == nums[i])
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}