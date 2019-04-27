#include <stdio.h>

int main()
{
    int n, i, a = 0, b;
    printf("Input an integer: ");
    scanf("%d", &n);
    printf("%d=", n);
    for (i = 2; i <= n; ++i)
    {
        b = i;
        while (n % b == 0)
        {
            n = n / i;
            if (a == 0)
            {
                printf("%d", i);
            }
            if (a > 0)
            {
                printf("*%d", i);
            }
            ++a;
        }
    }
    return 0;
}