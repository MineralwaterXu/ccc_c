#include <stdio.h>

int main()
{
    int a, b, c, d, n = 1, i, s = 0;
    printf("Input an integer: ");
    scanf("%d", &a);
    if (a >= 0)
        b = a;
    else
        b = -a;
    c = b;
    d = b;
    while (b / 10)
    {
        b = b / 10;
        ++n;
    }
    for (i = 1; i <= n; ++i)
    {
        c = c % 10;
        s = s + c;
        d = d / 10;
        c = d;
    }
    printf("count=%d sum=%d", n, s);
    return 0;
}