#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, sum;
    for (i = 6; ; ++i)
    {
        sum = i;
        for (j = 0; j < 5; ++j)
        {
            if (sum % 5 == 1 && sum > 1)
                sum = (sum - (sum / 5)) - 1;
            else
                break;
        }
        if (sum % 4 == 0 && j == 5)
        {
            printf("at least to catch %d\n", i);
            break;
        }
    }
    return 0;
}