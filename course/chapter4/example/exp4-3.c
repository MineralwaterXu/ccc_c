#include <stdio.h>

int main()
{
    int i, n, max = 0, a[100];
    printf("Input length (N<=100):\n");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    max = a[0];
    for (i = n - 1; i > 0; --i)
        if (max < a[i])
            max = a[i];
    printf("The max is %d", max);
    return 0;
}