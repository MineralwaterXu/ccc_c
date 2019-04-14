#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a < 0 && a % 2 == 0)
        printf("negative even number");
    else if(a < 0 && a % 2 != 0)
        printf("negative odd number");
    else if(a > 0 && a % 2 == 0)
        printf("positive even number");
    else if(a > 0 && a % 2 != 0)
        printf("positive odd number");
    else
        printf("not within the scope of judgment");
    return 0;
}
