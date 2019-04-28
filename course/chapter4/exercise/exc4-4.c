#include <stdio.h>

int main()
{
    int i, j, k = 0, n;
    int Matrix[3][3] = {{68, 55, 28}, {36, 45, 17}, {77, 16, 24}};
    scanf("%d", &n);
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
        {
            if (Matrix[i][j] == n)
            {
                printf("[%d,%d]", i + 1, j + 1);
                ++k;
                break;
            }
        }
    if (k == 0)
        printf("[N]");
    return 0;
}