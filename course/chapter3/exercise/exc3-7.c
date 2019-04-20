#include <stdio.h>

int main()
{
    char c1;
    scanf("%c", &c1);
    if(c1 <= 64)
        printf("%c", c1);
    else if(c1 <= 90)
        printf("%c", c1 + 32);
    else if(c1 <= 96)
        printf("%c", c1);
    else if(c1 <= 122)
        printf("%c", c1 - 32);
    else
        printf("%c", c1);
    return 0;
}