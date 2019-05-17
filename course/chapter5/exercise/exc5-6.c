#include <stdio.h>
#include <string.h>

char * my_copy(char *str, int m)
{
    if (m > strlen(str))
        return NULL;
    return str + m - 1 ;
}
int main()
{
    int m = 0;
    char str[81], *p = NULL;
    printf("Enter a string: " );
    fgets(str, sizeof str, stdin);
    printf("Enter m: " );
    scanf("%d", &m);
    p = my_copy(str, m);
    printf("%s", p);
    return 0;
}
