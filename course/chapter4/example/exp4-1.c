#include <stdio.h>

int main()
{
    int i;
    double a[10];
    double sum = 0.0;
    printf("Please insert 10 scores: \n");
    for (i = 0; i < 10; ++i)
        scanf("%lf", &a[i]);
    for (i = 0; i < 10; ++i)
        sum += a[i];
    printf("The average is:%.2lf", sum / 10);
    return 0;
}