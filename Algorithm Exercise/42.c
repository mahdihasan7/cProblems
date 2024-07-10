#include <stdio.h>

int main(void)
{
    int count10 = 0, count20 = 0;
    int array[2];
    printf("Give 2 integers: ");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] == 10)
            count10++;
        else if (array[i] == 20)
            count20++;
    }
    if (count10 == 2 || count20 == 2)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}