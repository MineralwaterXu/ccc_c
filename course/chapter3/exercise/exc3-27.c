#include<stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        printf("* ");
    printf("\n");
    for (j = 1; j <= n - 1; ++j)
    {
        for (k = 1;k < 2 * n - 1; ++k)
        {
        if (k == j + 1 || k == 2 * n - 1 - j)
            printf("*");
        else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}