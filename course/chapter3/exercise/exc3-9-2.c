#include <stdio.h>

int main()
{
    int a, b, m;
    scanf("%d %d", &a, &b);
    while (a < 1 || b <1)
    {
        printf("Input isn't correct. Please input again:\n");
        scanf("%d %d", &a, &b);
    }
    for (m = (a < b ? a : b); m >= 1; --m)
        if (a % m == 0 && b % m == 0)
            break;
    printf("The greatest common divisor:%d\n", m);
    printf("The lowest common multiple:%d\n", a * b / m);
    return 0;
}