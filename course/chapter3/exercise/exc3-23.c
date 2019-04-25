#include <stdio.h>

int main()
{
    int a;
    for (a = 1; a <= 1000; ++a)
    {
        if (a % 3 == 1)
        {
            if (a % 5 ==2)
            {
                if (a % 7 ==3)
                {
                    printf("%d ", a);
                }
            }
        }
    }
    return 0;
}