#include <stdio.h>
#define N 9

int main()
{
    int a[N] = {1, 12, 23, 34, 45, 56, 67, 68, 89};
    int low, high, mid, x;
    scanf("%d", &x);
    low = 0;
    high = N - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x == a[mid])
            break;
        else if (x < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (low <= high)
        printf("%d", mid);
    else
        printf("-1");
    return 0;
}