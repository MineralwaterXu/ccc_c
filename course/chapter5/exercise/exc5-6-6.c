#include<stdio.h>

int prime(int m);

int main()
{
     int i, j, count=0;
     for (i = 6; i <= 100; i += 2)
     {
          for(j = 3; j <= i / 2; ++j)
          {
               if(prime(j) && prime(i - j))
               {
                    printf("%4d=%2d+%2d",i,j,i-j);
                    ++count;
                    if(count == 5)
                    {
                         printf("\n");
                         count=0;
                    }
                    break;
               }
          }
     }
     return 0;
}

int prime(int m)
{
     int i;
     for(i = 2; i <= m - 1; ++i)
     {
          if(m % i == 0)
               return 0;
     }
     return 1;
 }