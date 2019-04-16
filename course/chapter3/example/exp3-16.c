#include <stdio.h>

int main()
{
    int a, b, num1, num2, temp;
    printf("Please input two integer numbers:");
    scanf("%d %d", &num1, &num2);
    while (num1 < 1 || num2 < 1)
    {
        printf("Input isn't correct. Please input again:\n");
        scanf("%d %d", &num1, &num2);
    }
    a = num1;
    b = num2;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("The largest common divisor:%d\n", a);
    printf("The least common multiple:%d\n", num1 * num2 / a);
    return 0;
}