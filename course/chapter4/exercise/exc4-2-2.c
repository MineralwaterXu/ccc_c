#include <stdio.h>

int main()
{
    int m, n, i, k, j;
    printf("Input m: ");
    scanf("%d", &m);
    printf("Input n: ");
    scanf("%d", &n);
    j = 1;
    if (m == 1)
    {
        m = m + 1;
    }
    for (i = m; i <= n; ++i)
    {
        for (k = 2; k <= i / 2; ++k)
        {
            if (i % k == 0)
                break;
        }
        if (k > i / 2 && k != 1)
        {
            printf("%4d", i);
            j = j + 1;
            if (j == 7)
            {
                printf("\n");
                j = 1;
            }
        }
    }
    return 0;
}