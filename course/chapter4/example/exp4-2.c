#include <stdio.h>

int main()
{
    int i, n, a[100];
    printf("Input length (N<=100): \n");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("The inverted number is:\n");
    for (i = n - 1; i >= 0; --i)
        printf("%4d", a[i]);
    return 0;
}