#include <stdio.h>
#include <math.h>

int main()
{
    double x, item, f1, fm2 = 1, sum = 0;
    int i = 1, f = 1;
    scanf("%lf", &x);
    item = x;
    f1 = x;
    while (fabs(item) >= 1e-6)
    {
        sum = sum + item;
        f1 = f1 * x * x;
        fm2 = fm2 * i;
        f = -f;
        item = f * f1 / ((2 * i + 1) * fm2);
        ++i;
    }
    printf("%lf\n", sum);
    return 0;
}