#include <stdio.h>

int main()
{
    int i, n, fa = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
        fa = fa * i;
    printf("%d\n", fa);
    return 0;
}