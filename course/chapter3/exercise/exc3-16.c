#include <stdio.h>

int main()
{
    int m, n = 0, t;
    scanf("%d", &m);
    t = m;
    do
    {
        n = n * 10 + t % 10;
        t = t / 10;
    } while (t != 0);
    if (m == n)
        printf("Y\n");
    else
        printf("N\n");
    return 0;
}