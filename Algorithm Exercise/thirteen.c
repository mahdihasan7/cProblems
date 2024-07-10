#include <stdio.h>

int main(void)
{
    int size;
    printf("The size of the array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Give an array of integers: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < size - 1; i++)
    {
        if ((nums[i] == 1) && (nums[i + 1] == 2) && (nums[i + 2] == 3))
        {
            printf("1\n");
        }
    }
    return 0;
}