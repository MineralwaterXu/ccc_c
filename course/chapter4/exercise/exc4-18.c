#include <stdio.h>
#define N 6

int main()
{
    int n, arr[N][N], i, j, k;
    int rowMax, arrPos, colPos;
    int find = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < n; ++i)
    {    
        for (j = 0; j < n; ++j)
        {
            if(j == 0)
            {
                rowMax = arr[i][0];
            }
            else
            {
                if (arr[i][j] > rowMax)
                    rowMax = arr[i][j];
            }
        }
        for (j = 0; j < n; ++j)
        {
            if (arr[i][j] == rowMax)
            {
                arrPos = i;
                colPos = j;
                for (k = 0; k < n; ++k)
                {
                    if (arr[k][colPos] < arr[arrPos][colPos])
                    {
                        break;
                    }
                }
                if(k == n)
                {
                    find = 1;
                }
            }
            if (find)
                break;
        }
        if (find)
        { 
            break;
        }
    } 
    if (find)
    {
        printf("%d %d", arrPos, colPos);
    }
    else
    {
        printf("NO");
    }
    return 0;
}
