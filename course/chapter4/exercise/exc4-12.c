#include <stdio.h>

int main()
{
    int n, m = 0, i, k = 0, score[21];
    double ave = 0.00;
    scanf("%d\n", &n);
    while (n > 20)
        scanf("%d\n",&n);
    for(i = 0; i < n; ++i)
    {    
        scanf("%d", &score[i]);
        m += score[i];
    }
    ave = m / n;
    printf("%-.2f\n", ave);
    for (i = 0; i < n; ++i)
    {
        if (score[i] < ave)
            if (k == 0)
                printf("%d", score[i]);
        if (score[i] < ave)
        {
            if (k > 0)
            {
                printf(",%d", score[i]);
            }
            ++k;
        }
    }
    return 0;
}