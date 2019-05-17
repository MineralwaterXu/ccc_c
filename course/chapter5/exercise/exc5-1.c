#include <stdio.h>

int main()
{
    int m, n, k, i;
    int fib(int i);
    printf("Input m: ");
    scanf("%d", &m);
    printf("Input n: ");
    scanf("%d", &n);
    for(k = m; k <= n; ++k)
        for(i = 1; fib(i) <= n; ++i)
        {
            if (k == fib(i))
                printf("%.d ", k);
        }
    return 0;
}
int fib(int i)
{
    if(i == 1)
        return 1;
    if(i == 2)
        return 1;
    else
        return fib(i - 1) + fib(i - 2);
}
