#include <stdio.h>

int main()
{
    int n, i, j;
    int item, sum = 0;
    while (scanf("%d", &n))
    {
        for (i = 1; i <= n; ++i)
        {
            item = 1;
            for (j = 1; j <= i; ++j)
            {
                item = item * j;
            }
            sum = sum + item;
        }
    printf("%d", sum);
    return 0;
    }
    return 0;
}