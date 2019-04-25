#include <stdio.h>

int main()
{
    double a = 1.0, b, c;
    for (b = 0.001;  b <= 1.0; b = b + 0.001)
    {
        a = a * (1 + b) * (1 + b) * (1 + b) * (1 + b) * (1 + b) * (1 + b) * (1 + b) * (1 + b) * (1 + b) * (1 + b);
        if (a >= 4.0)
        {
            printf("%.1lf%%", b * 100);
            break;
        }
        a = 1.0;
    }
    return 0;
}
