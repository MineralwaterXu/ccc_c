#include <stdio.h>

int main()
{
    int i, n, m = 0, k, temp, f, h = 1, temp2, temp3, temp4 = 0;
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i)
    {
        temp = n;
        while (temp != 0)
        {
            temp = temp / 10;
            ++m;
        }
        f = m;
        for (k = f; k >= 0; --k)
        {
            for (f = 1; f <= (m - 1); ++f)
            {
                h = h * 10;
            }
            temp2 = n;
            temp2 = temp2 / h;
            temp3 = temp2;
            printf("%2d", temp3 - temp4);
            --m;
            temp4 = temp2 * 10;
            h = 1;
            if (m <= 0)
            {
                break;
            }
        }
        break;
    }
    return 0;
}