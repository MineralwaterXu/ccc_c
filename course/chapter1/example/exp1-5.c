#include <stdio.h>

int factorial (int n)
{
    int i, fa = 1;
    for (i = 1; i <= n; ++i)
        fa = fa * i;
    return fa;
}

int main()
{
    int n, f;
    scanf("%d", &n);
    f = factorial (n);
    printf("%d\n", f);
    return 0;
}