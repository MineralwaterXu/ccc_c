#include <stdio.h>

double fn(int a, int n)
{
    double s = 0;
    int i;
    for(i = 0; i < n; ++i)
        s = s * 10 + a;
    return s;
}
int main()
{
    long int sum = 0;
    int a;
    long int n;
    int i;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input n: ");
    scanf("%ld", &n);
    for(i = 1; i <= n; ++i)
        sum += fn(a, i);
    printf("sum=%ld", sum);
    return 0;
}
