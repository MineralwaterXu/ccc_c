#include <stdio.h>
#define N 10

int main()
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
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
    if (low <=  high)
        printf("Index is %d \n", mid);
    else
        printf("Not Found\n");
    return 0;
}