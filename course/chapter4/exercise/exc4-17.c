#include <stdio.h>

int main()
{
    int mat[10][10];
    int n, i, j;
    int ok = 1;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    for (j = 0; j < n; ++j)
        scanf("%d", &mat[i][j]);
    for (i = 1; i < n; ++i)
    {
        for (j = 0; j < i; ++j)
            if (mat[i][j] != 0)
                ok = 0;
    }
    printf("%s\n", ok ? "YES" : "NO");
    return 0;
}
