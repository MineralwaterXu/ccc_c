#include <stdio.h>

int main()
{
    long a;
    int n;
    scanf("%ld", &a);
    if(a > 0 && a <= 99999)
    {
        n = a < 10 ? 1 : a < 100 ? 2 : a < 1000 ? 3 : a < 10000 ? 4 : a < 100000 ? 5 : 0;
        printf("%d digits, inversed number: ", n);
        switch(n)
        {
            case 5:
                printf("%ld", a % 10);
                a = a / 10;
            case 4:
                printf("%ld", a % 10);
                a = a / 10;
            case 3:
                printf("%ld", a % 10);
                a = a / 10;
            case 2:
                printf("%ld", a % 10);
                a = a / 10;
            case 1:
                printf("%ld\n", a % 10);
        }
    }
    else
        printf("The number is not a valid num!\n");
    return 0;
}