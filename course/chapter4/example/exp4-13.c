#include <stdio.h>
#define N 5
#define M 6

int main()
{
    int col, i, j, row, sum = 0;
    int a[N][M];
    printf("Enter integers:\n");
    for (i = 0; i < N; ++i)
        for (j = 0; j < M; ++j)
            scanf("%d", &a[i][j]);
    row = i;
    col = j;
    for (i = 0; i < N; ++i)
        sum += a[i][0] + a[i][M - 1];
    for (j = 1; j < M - 1; ++j)
        sum += a[0][j] + a[N - 1][j];
    printf("sum=%d", sum);
    return 0;
}