#include <stdio.h>

int main()
{
    int i, a, b, c;
    for (i = 100; i <= 999; ++i)
    {
        c = i % 10;
        b = i / 10 % 10;
        a = i / 100 % 10;
        if (i == a * a * a + b * b * b + c * c * c)
        {
            printf("%d ", i);
        }
    }
    return 0;
}