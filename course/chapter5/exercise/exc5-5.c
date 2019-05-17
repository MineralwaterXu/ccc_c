#include <stdio.h>

void union_function(int a[], int b[], int n, int m, int c[]);

int main()
{
    int n, m, i, N, M;
    printf("Enter n: ");
    scanf("%d", &n);
    N = n;
    int a[N];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("Enter m: ");
    scanf("%d", &m);
    M = m;
    int b[M], c[N + M];
    printf("Enter %d integers: ", m);
    for (i = 0; i < m; ++i)
        scanf("%d", &b[i]);
    union_function(a, b, n, m, c);
    for (i = 0; i < n + m; ++i)
        printf("%4d", c[i]);
    return 0;
}
void union_function(int a[], int b[], int n, int m, int c[])
{
    int i, j = 0, t, p;
    for (i = 0; i < n; ++i)
        c[i] = a[i];
    for (t = n + j; t < n + m; ++t)
    {
        c[t] = b[j];
        ++j;
    }
    for (j = 1; j < m + n; ++j)
    {
        t = c[j];
        p = j - 1;
        while (p >= 0 && t < c[p])
        {
            c[p + 1] = c[p];
            --p;
        }
        c[p + 1] = t;
    }
}