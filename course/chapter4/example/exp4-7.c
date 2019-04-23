#include <stdio.h>
#define N 10

int main()
{
    int a[N], k, i, j, index, temp;
    for (j = 0; j < N; ++j)
        scanf("%d", &a[j]);
    for (k = 0; k < N - 1; ++k)
    {
        index = k;
        for (i = k + 1; i < N; ++i)
            if (a[i] < a[index])
                index = i;
            if (index != k)
            {
                temp = a[index];
                a[index] = a[k];
                a[k] = temp;
            }
    }
    for (j = 0; j < N; ++j)
        printf("%4d", a[j]);
    return 0;
}