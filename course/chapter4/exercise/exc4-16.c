#include <stdio.h>
#define N 11

int main()
{
    int i, n, temp, p, a[N];
    for (i = 0; i < N - 1; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    a[i++] = n;
    for (i = 1; i < N; ++i)
    {
        temp = a[i];
        p = i - 1;
        while (p >= 0 && temp > a[p])
        {
            a[p + 1] = a[p];
            --p;
        }
        a[p + 1] = temp;
    }
    for (i = 0; i < N; ++i)
        printf("%d ", a[i]);
    return 0;
}