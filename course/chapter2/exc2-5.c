#include <stdio.h>

int main()
{
    char a;
    char b;
    a = getchar();
    b = getchar();
    a = a + 32;
    b = b + 32;
    putchar(85);
    putchar(115);
    putchar(101);
    putchar(32);
    putchar(112);
    putchar(117);
    putchar(116);
    putchar(99);
    putchar(104);
    putchar(97);
    putchar(114);
    putchar(58);
    putchar(a);
    putchar(32);
    putchar(b);
    putchar('\n');
    printf("Use printf:%c %c", a, b);
    return 0;
}