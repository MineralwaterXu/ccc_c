#include <stdio.h>

int main()
{
    int  i = 1;
    double item = 1, sum = 1;
        while (item <= 1e6)
        {
            item = item * i;
            sum = sum + (1 / item);
            ++i;
        }
    printf("%lf", sum);
    return 0;
}