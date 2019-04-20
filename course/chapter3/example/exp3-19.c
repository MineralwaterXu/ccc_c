#include <stdio.h>

int main()
{
    int n, i, number;
    double avg, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &number);
        sum += number;
    }
    avg = sum / n;
    printf("%lf", avg);
    return 0;
}