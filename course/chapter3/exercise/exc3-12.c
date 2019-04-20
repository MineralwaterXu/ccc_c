#include <stdio.h>

int main()
{
    int k, m = 1, n = 0, t;
    for (m = 1; m <= 1000; ++m)
    {
        t = m;
        do
        {
            n = n * 10 + t % 10;
            t = t / 10;
        } while (t != 0);
        if (m == n)
        {
            for (k = 2; k < m; ++k)
                if (m % k == 0)
                    break;
                if (k == m)
                    printf("%d ", m);
        }
        n = 0;
    }
    return 0;
}