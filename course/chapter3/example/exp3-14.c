#include <stdio.h>

int main()
{
    int i, n;
    printf("Please input a integer:");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
        i *= 10;
    if (n * n % i == n)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}