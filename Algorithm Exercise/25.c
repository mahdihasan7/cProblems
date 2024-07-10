#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a >= 20 && a < b || a < c) || (b >= 20 && b < a || b < c) || (c >= 20 && c < a || c < b))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
    
}