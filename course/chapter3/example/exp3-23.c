#include <stdio.h>

int main()
{
    int i, n, n1, n2, n3;
    n1 = 1;
    n2 = 1;
    printf("Input n=");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d plans", n1);
        return 0;
    }
    else if (n == 2)
    {
        printf("%d plans", n2);
        return 0;
    }
    else
    {
        for (i = 3; i <= n; ++i)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        printf("%d plans", n3);
    }
    return 0;
}