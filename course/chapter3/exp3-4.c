#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, x1, x2, real, imag;
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0 && b == 0 && c == 0)
        printf("Infinite roots!\n");
    else if(a == 0 && b == 0 && c != 0)
        printf("No roots!\n");
    else if(a == 0 && b != 0)
        printf("Single root: %f\n", -c / b);
    else if(a != 0)
    {
        p = b * b - 4 * a * c;
        real = -b / (2 * a);
        imag = sqrt(fabs(p)) / (2 * a);
        if(p == 0)
            printf("Single root: %f", real);
        else if(p < 0)
        {
            printf("Complex roots: ");
            printf("%f + %fi, %f - %fi\n", real, imag, real, imag);
        }
        else
        {
            x1 = real + imag;
            x2 = real - imag;
            printf("Real roots: %10f and %10f\n", x1, x2);
        }
    }
    return 0;
}