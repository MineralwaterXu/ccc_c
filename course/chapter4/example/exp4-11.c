#include <stdio.h>
#define N 6

int main()
{
    int i, j;
    int a[N][N];
    for (i = 0; i < N; ++i)
        for (j = 0; j < N; ++j)
            a[i][j] = (i + 1) * (j + 1);
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    return 0;
}