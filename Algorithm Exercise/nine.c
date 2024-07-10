#include <stdio.h>
#include <stdlib.h>
int checksum(int a, int b);
int main(void)
{
    int a, b;
    printf("Two integers: ");
    scanf("%d %d", &a, &b);
    int result = checksum(a, b);
    printf("%d\n", result);
    return 0;
}

int checksum(int a, int b)
{
    int c, d;
    c = abs(a - 100);
    d = abs(b - 100);
    if (c > d)
    {
        printf("%d\n", b);
    }
    else if (d > c)
    {
        printf("%d\n", a);
    }
    else if( c == d)
    {
        printf("0\n", a);
    }
    
} 
