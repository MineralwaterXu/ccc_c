#include <stdio.h>

int main()
{
  long int number;
  int b[31];
  int i = 0, n;
  scanf("%ld", &number);
  if(number == 0)
    printf("%ld",number);
  while (number != 0)
  { 
    b[i] = number % 2;
    number = number / 2;
    ++i;
  }
  n = i - 1;
  for (i = n; i >= 0; --i)
    printf("%d", b[i]);
  printf("\n");
  return 0;
}