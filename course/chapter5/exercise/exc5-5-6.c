#include <stdio.h>

int countdigit(int number, int digit)
{
    int count = 0;
    while (number)
    {
        if((number % 10) == digit)
        ++count;
        number /= 10;
    }
    return count;
}
int main()
{
    int n, d;
    scanf("%d", &n);
    scanf("%d", &d);
    printf("Enter an integer: Number of digit 2: %d", countdigit(n, 2));
    return 0;
}
