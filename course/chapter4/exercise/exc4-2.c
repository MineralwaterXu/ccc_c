#include <stdio.h>
#define N 5

int main()
{
    int i, j;
    int a[5][5];
    for (i = 0; i < N; ++i)
        for (j = 0; j < N; ++j)
            if (j == i || j == N - 1 - i)
            {
                a[i][j] = 1;
                printf("%d ", a[i][j]);
                if (j == 4)
                {
                    printf("\n");
                }
            }
            else
            {
                a[i][j] = 0;
                printf("%d ", a[i][j]);
                if (j == 4)
                {
                    printf("\n");
                }
            }
    return 0;
}