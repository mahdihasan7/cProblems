#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int O;
    printf("Give an integer: ");
    scanf("%d", &O);
    if (abs(O - 100) <= 10 || abs(O - 200) <= 10)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
}