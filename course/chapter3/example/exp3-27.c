#include <stdio.h>

int main()
{
    long int x1, x2, x3;
    int i;
    x1 = x2 = 1;
    printf("%6ld %6ld", x1, x2);
    for (i = 3; i <= 20; ++i)
    {
        x3 = x1 + x2;
        printf("%6ld", x3);
        if (i % 5 == 0)
            printf("\n");
        x1 = x2;
        x2 = x3;
    }
    return 0;
}