#include <stdio.h>
#define N 10

void fun(int *a, int n, int x)
{ 
    int i, j, k;
    for (i = 0; i < x; ++i)
    { 
        k = a[0];
        for (j = 0; j < n - 1; ++j)
            a[j] = a[j + 1]; 
            a[n - 1] = k;
    }
}
int main()
{
    int a[N], i, x;
    printf("Enter %d integers: ", N);
    for (i = 0; i < N; ++i)
        scanf("%3d", &a[i]);
    printf("Enter x: ");
    scanf("%d ", &x);
    fun(a, N, x);
    printf("After Circle left shift %d bit:  ", x);
    for (i = 0; i < N; ++i)
        printf("%3d ", a[i]);
    printf("\n");
    return 0;
}
