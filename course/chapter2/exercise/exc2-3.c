#include <stdio.h>
#define PI 3.14159

int main()
{
    printf("Input radius:");
    double radius;
    scanf("%lf", &radius);
    double area = PI * radius * radius;
    printf("radius=%lf area=%lf", radius, area);
    return 0;
}