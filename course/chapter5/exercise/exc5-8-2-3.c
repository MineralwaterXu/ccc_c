#include <stdio.h>
#include <string.h>

void delchar(char *s, char c)
{
    char *p;
    for (p = s; *s; ++s)
    if (*s != c)
        *p++ = *s;
    *p = '\0';
}
int main()
{
    char c, s[100];
    fgets(s, sizeof s, stdin);
    scanf("%c", &c);
    delchar(s, c);
    printf("Input a string: Input a char: After deleted,the string is: %s\n", s);
    return 0;
}
