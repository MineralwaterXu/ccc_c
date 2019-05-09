#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int x;
    int a, b, c;
    printf("total:9,and they are:");
    for (num = 1000; num >= 100; --num)
    {
        a = num / 100;
        b = num / 10 % 10;
        c = num % 10;
        x = (int)sqrt(num);
        if((a == b || a == c || b == c) && x * x == num)
        {
            printf("%d ", num);
        }
    }
    return 0;
}
