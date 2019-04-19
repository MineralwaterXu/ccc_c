#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x, f1, f2;
    static int count = 0;
    x1 = 1.5;
    do
    {
        x = x1;
        f1 = x * (2 * x * x - 4 * x + 3) - 6;
        f2 = 6 * x * x - 8 * x + 3;
        x1 = x - f1 / f2;
        ++count;
    } while (fabs(x1 - x) >= 1e-5);
    printf("%8.7f\n", x1);
    printf("%d\n", count);
    return 0;
}