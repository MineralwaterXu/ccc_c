#include <stdio.h>

int main()
{
    int i, j;
    double item, sum;
    sum = 0;
    item = 1;
    for (i = 1; i <= 100; ++i)
    {
        for (j = 1; j <= i; ++j)
            item = item * j;
        sum = sum + 1 / item;
    }
    printf("sum=%lf\n", sum);
    return 0;
}