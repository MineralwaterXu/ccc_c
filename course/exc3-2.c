#include <stdio.h>

int main()
{
    int n, i_odd = 0, i_even = 0, sum_odd = 0, sum_even = 0;
    while(scanf("%d", &n))
    {
        if(n == 0)
            break;
        else if(n % 2 == 1 || n % 2 == -1)
        {
            sum_odd += n;
            ++i_odd;
        }
        else
        {
            sum_even += n;
            ++i_even;
        }
    }
    double aver_odd = sum_odd * 1.0 / i_odd, aver_even = sum_even * 1.0 / i_even;
    if (i_odd == 0 && i_even == 0)
    {
        printf("0 0.00\n");
        printf("0 0.00");
    }
    else if (i_odd == 0)
    {
        printf("0 0.00\n");
        printf("%d %.2f", i_even, aver_even);
    }
    else if (i_even == 0)
    {
        printf("%d %.2f\n", i_odd, aver_odd);
        printf("0 0.00");
    }
    else
    {
        printf("%d %.2f\n", i_odd, aver_odd);
        printf("%d %.2f", i_even, aver_even);
    }
    return 0;
}