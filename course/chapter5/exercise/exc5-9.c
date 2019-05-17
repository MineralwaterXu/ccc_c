#include <stdio.h>
#define N 50

int main()
{
   char ch[N];
   int i, n, flag = 1;
   printf("Enter a string: ");
   i = 0;
   while ((ch[i] = getchar()) != '\n')
      ++i;
   n = i;
   ch[i] = '\0';
   for (i = 0; i < n; ++i)
      if (ch[i] >= 'a' && ch[i] <= 'z')
      {
         flag = 0;
         ch[i] = ch[i] - 32;
      }
      if (flag == 1)
         printf("no lowercase");
      else
         for (i = 0; i < n; ++i)
            printf("%c", ch[i]);
      return 0;
}