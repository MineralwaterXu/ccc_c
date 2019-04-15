#include <stdio.h>

int main()
{
    long num;
    int n = 0;
    printf("Please input the number:");
    scanf("%ld", &num);
    printf("Inversed number is: ");
    do
    {
        printf("%ld", num % 10);
        ++n;
    } 
    while ((num = num / 10));
    printf("\nIt has %d bits.\n", n);
    return 0;
}