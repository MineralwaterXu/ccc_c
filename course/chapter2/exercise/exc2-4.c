#include <stdio.h>

int main()
{
    printf("Input a number:");
    int a;
    scanf("%d", &a);
    int b = a / 100;
    int c = (a / 10) % 10;
    int d = a % 10;
    printf("%d %d %d", d, c, b);
    return 0;
}