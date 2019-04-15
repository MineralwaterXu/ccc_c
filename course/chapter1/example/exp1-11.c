#include <stdio.h>
#define PI 3.1415926

int main()
{
    double radius, area;
    printf("Please enter the radius:");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %.2lf\n", area);
    return 0;
}