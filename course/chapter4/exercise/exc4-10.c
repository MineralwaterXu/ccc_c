#include <stdio.h>

int main()
{
    int i, j = 0, end = 0;
    char a[80], b[80];
    for (i = 0; i < 80; ++i)
        scanf("%c", &a[i]);
    for (i = 0; a[i] != '\0'; ++i)
    {
        if ((a[i] >= 'a' && a[i] <= 'f') || (a[i] >= 'A' && a[i] <= 'F') || (a[i] >= '0' && a[i] <= '9'))
        {
            b[j] = a[i];
            ++j;
        }
    }
    b[j] = '\0';
    printf("%s\n", b);
    for (j = 0; b[j] != '\0'; ++j)
    {
        if (b[j] >= '0' && b[j] <= '9')
            end = end * 16 + b[j] - '0';
        else if (b[j] >= 'A' && b[j] <= 'F')
            end = end * 16 + b[j] - 'A' + 10;
        else if (b[j] >= 'a' && b[j] <= 'f')
            end = end * 16 + b[j] - 'a' + 10;
    }
    printf("%d", end);
    return 0;
}
