#include <stdio.h>

int main()
{
    int a, b, m;
    scanf("%d %d", &a, &b);
    while (a < 1 || b < 1)
    {
        printf("Input isn't correct. Please input again:");
        scanf("%d %d", &a, &b);
    }
    for (m = (a < b ? a : b); m >= 1; --m)
        if (a % m == 0 && b % m == 0)
            break;
    printf("Largest common divisor:%d\n", m);
    printf("Least common multiple:%d\n", a * b / m);
    return 0;
}