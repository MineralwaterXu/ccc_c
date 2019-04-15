#include <stdio.h>

int main(void)
{
    int i, t, s, m, n, digit;
    printf("Input m: ");
    scanf("%d", &m);
    printf("Input n: ");
    scanf("%d", &n);
    for(i = m; i <= n; ++i)
    {
        t = i;
        s = 0;
        while(t != 0)
        {
            digit = t % 10;
            s = s + digit * digit * digit;
            t = t / 10;
        }
        if(s == i)
            printf("%d\n", i);
    }
    return 0;
}