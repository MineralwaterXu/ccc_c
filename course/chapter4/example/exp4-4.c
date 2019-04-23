#include <stdio.h>

int main()
{
    int i, n, min = 0, a[100];
    printf("Input length (N<=100):\n");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    min = a[0];
    for (i = n - 1; i > 0; --i)
        if (min > a[i])
            min = a[i];
    printf("The min is %d", min);
    return 0;
}