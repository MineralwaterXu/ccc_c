#include <stdio.h>

int main()
{
    int a[100], i, k;
    a[0] = 1;
    a[1] = 1;
    printf("Please select I number to be printed:\n");
    scanf("%d", &k);
    for (i = 2; i < 100; ++i)
        a[i] = a[i - 1] + a[i - 2];
    printf("The number is %d", a[k - 1]);
    return 0;
}