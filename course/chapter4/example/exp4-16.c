#include <stdio.h>
#include <string.h>

int main(void)
{
    int count, i;
    char str[80];
    printf("Enter a string: ");
    i = 0;
    while ((str[i] = getchar()) != '\n')
        ++i;
    str[i] = '\0';
    for (i = 0, count = strlen(str) - 1; i <= count; ++i, --count)
        if (str[i] != str[count])
            break;
        if (i >= count)
            printf(" It is a palindrome\n");
        else
            printf(" It is not a palindrome\n");
        return 0;
}