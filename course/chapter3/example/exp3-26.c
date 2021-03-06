#include <stdio.h>
#include <math.h>

int main()
{
    float x1 = 1.0, x2 = 4.0, x, f, f1;
    f1 = x1 * x1 * x1 + 4 * x1 * x1 - 10;
    while (fabs(x2 - x1) > 1e-6)
    {
        x = (x1 + x2) / 2;
        f = x * x * x + 4 * x * x - 10;
        if (f1 * f < 0)
            x2 = x;
        else
            x1 = x;
    }
    printf("The root is: %f\n", x);
    return 0;
}