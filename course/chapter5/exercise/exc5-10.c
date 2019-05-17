#include <stdio.h>

int main()
{
    printf("Enter n: ");
    int num;
    scanf("%d", &num);
    int a, i;
    for (i = 0; num > 0; ++i)
    {
        a = num % 10;
        printf("%d", a);
        num = num / 10;
    }
    return 0;
}
