#include <stdio.h>

int main()
{
    int a, temp = 0 , n, s = 0, i;
    printf("Input a, n: ");
    scanf("%d %d", &a, &n);
    temp = a;
    for (i = 1; i <= n; ++i)
    {
        s = s + temp;
        temp = temp * 10 + a;
    }
    printf("s=%d", s);
    return 0;
}