#include <stdio.h>
#include <math.h>

int main()
{
    int i, k, m, n, flagm, flagn, count;
    count = 0;
    for (i = 3; i <= 50; ++i)
    {
        m = 1;
        do
        {
            m = m + 1;
            n = 2 * i - m;
            flagm = 1;
            flagn = 1;
            for (k = 2; k <= (int)(sqrt(m)); ++k)
            {
                if (m % k == 0)
                {
                    flagm = 0;
                    break;
                }
            }
            for (k = 2; k <= (int)(sqrt(n)); ++k)
            {
                if (n % k == 0)
                {
                    flagn = 0;
                    break;
                }
            }
        } 
        while (flagm * flagn == 0);
        ++count;
        printf("%4d=%2d+%2d", 2 * i, m, n);
        if (count % 5 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}