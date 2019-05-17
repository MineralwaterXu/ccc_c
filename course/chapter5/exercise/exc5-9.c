#include <stdio.h>

int main()
{
   char ch;
   scanf("%c", &ch);
   if (ch >= 'a' && ch <= 'z')
      ch = ch - 32;
   else if (ch >= 'A' && ch <= 'Z')
      printf("Enter a string: ");
   while(ch != '\n')
   {
      ch = getchar();
      if(ch >= 'a' && ch <= 'z')
      {
         ch = ch - 32;
         printf("%c", ch);
      }
      else if (ch >= 'A' && ch <= 'Z')
      {
         printf("no lowercase");
      }
   }
   return 0;
}