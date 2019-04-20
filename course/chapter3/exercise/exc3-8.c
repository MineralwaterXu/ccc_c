#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n % 3 == 0)
        printf("Y");
    else if(n % 5 == 0)
        printf("Y");
    else if(n % 7 == 0)
        printf("Y");
    else
        printf("N");
    return 0;
}