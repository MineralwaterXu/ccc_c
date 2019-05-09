#include<stdio.h>
#include<string.h>

int main()
{
    char a[10]; char *p;
    int i, x, y;
    p = &a[0];
    for (i = 0; i < 10; ++i)
        a[i] = '\0';
    i = 0;
    while ((a[i] = getchar()) != '\n')
        ++i;
    a[i] = '\0';
    x = 0;
    y = strlen(a);
    for (i = 0; i < y / 2; ++i)
        if (*(p + i) != *(p + y - i -1 ))
        {
            x = 1;
            break;
        }
    if (x == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
