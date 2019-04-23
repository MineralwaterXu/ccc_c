#include <stdio.h>
#define N 6

int main()
{
    int i, temp, p, a[N];
    for (i = 0; i < N; ++i)
        scanf("%d", &a[i]);
    for (i = 1; i < N; ++i)
    {
        temp = a[i];
        p = i - 1;
        while (p >= 0 && temp < a[p])
        {
            a[p + 1] = a[p];
            --p;
        }
        a[p + 1] = temp;
    }
    for (i = 0; i < N; ++i)
        printf("%4d", a[i]);
    return 0;
}