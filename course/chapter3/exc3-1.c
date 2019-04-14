#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a + b > c) && (a - b < c) | (b + c > a) && (b - c < a) | (c + a > b) && (c - a < b))
    //it is a triangle
    {
        if(a == b && a == c)
            printf("equilateral triangle");
        else if((a == b) | (b == c) | (a == c))
            printf("isosceles triangle");
        else if((a * a == b * b + c * c ) | (b * b == a * a + c * c) | (c * c == a *a + b * b ))
            printf("right triangle");
        else
            printf("arbitrary triangle");
    }
    else
        printf("not triangle");
    return 0;
}