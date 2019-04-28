#include <stdio.h>
#define N 4

int main()
{
    int i, j;
    int a[N][N];
    for (i = 0; i < N; ++i)
        for (j = 0; j < N; ++j)
            scanf("%d", &a[i][j]);
    printf("%d", a[0][0] + a[1][1] + a[2][2] + a[3][3]);
    return 0;
}