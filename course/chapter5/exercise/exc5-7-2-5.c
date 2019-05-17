#include <stdio.h>

int main()
{
    int day = 0;
    int y = 0;
    int m = 1;
    int d = 0;
    scanf("%d %d %d", &y, &m, &d);
    printf("Input year, month, day: Days of year: ");
    switch (m - 1)
    {
        case 11:
            day += 30;
        case 10:
            day += 31;
        case 9:
            day += 30;
        case 8:
            day += 31;
        case 7:
            day += 31;
        case 6:
            day += 30;
        case 5:
            day += 31;
        case 4:
            day += 30;
        case 3:
            day += 31;
        case 2:
            if((y % 4 == 0 && y % 100 != 0) ||y%400==0) 
            {
                day += 29;
            }
            else
            {
                day += 28;
            }
        case 1:
            day += 31;
              
        default:
            break;
      }
    printf("%d", day += d);
    return 0;
 }
