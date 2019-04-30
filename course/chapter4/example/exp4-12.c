#include <stdio.h>
#define N 5
#define M 6

int main()
{
    int col, i, j, row;
    int a[N][M];
    printf("Enter integers:\n");
    for (i = 0; i < N; ++i)
        for (j = 0; j < M; ++j)
            scanf("%d", &a[i][j]);
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < M; ++j)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    col = 0;
    row = col;
    for (i = 0; i < N; ++i)
        for (j = 0; j < M; ++j)
            if (a[i][j] > a[row][col])
            {
                row = i;
                col = j;
            }
    printf("max = a[%d][%d] = %d\n", row, col, a[row][col]);
    return 0;
}