#include <stdio.h>

int main(void)
{
    int c, f;
    printf("Two temperatures: ");
    scanf("%d %d", &c, &f);
    if ((c < 0 && f > 100) || (f < 0 && c > 100))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
}