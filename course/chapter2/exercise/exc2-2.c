#include <stdio.h>

int main()
{
    int a, b;
    printf("Input two integers:");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    double aver = (a + b) / 2.0;
    printf("sum=%d\naverage=%.1lf", sum, aver);
    return 0;
}