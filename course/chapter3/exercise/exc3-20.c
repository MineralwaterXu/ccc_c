#include <stdio.h>

int main()
{
    int n, i, a = 0;
    for (n = 2; n <= 1000; ++n)
    {
        for (i = 1; i < n; ++i)
        {
            if (n % i == 0)
            {
                a += i;
            }
        }
        if (a == n)
        {
            printf("%d ", a);
        }
        a = 0;
    }
    return 0;
}