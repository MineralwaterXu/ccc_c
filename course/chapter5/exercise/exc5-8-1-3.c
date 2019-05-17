#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int n)
{
    int i, j, k, tmp;        
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < i; ++j)
            if (a[i] < a[j])
                break;
        tmp = a[i];
        for (k = i; k > j; --k)
            a[k] = a[k - 1];
        a[j] = tmp;
    }
}
int main()
{
    int *a, n, i;
    scanf("%d", &n);
    if (n > 0)
    {
        a = (int *)malloc(n * sizeof(int));
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        sort(a, n);
        printf("Input n: Input array of %d integers: After sorted the array is: ", n);
        for (i = 0; i < n; ++i)
            printf("%d ", a[i]);
        printf("\n");
        free(a);
    }
    return 0;
}