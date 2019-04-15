#include <stdio.h>

int main()
{
    int num1, num2, num3, max;
    printf("Please input three numbers:");
    scanf("%d, %d, %d", &num1, &num2, &num3);
    max = num1;
    if (num2 > num1)
        max = num2;
    if (num2 > num3)
        max = num3;
    printf("The three numbers are: %d, %d, %d", num1, num2, num3);
    printf("max = %d\n", max);
    return 0;
}