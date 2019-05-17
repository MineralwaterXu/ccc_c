#include <stdio.h>

int main()
{
    int i, k, n = 0;
    char str[80];
    k = 0;
    while ((str[k] = getchar()) != '\n')
        ++k;
    str[k] = '\0';
    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] >= '0' && str[i] <= '9')
            n = n * 10 + str[i] -'0';    
    }
    printf("Enter a string: ");
    printf("digit=%d,%d\n", n, 2 * n);
    return 0;
}
