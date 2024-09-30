#include <stdio.h>

int main()
{

  int n, i, p;
  printf("entre le number:  ");
  scanf("%d", &n);
  for (i = 1; i < n; i++)
  {
    p = i;
    printf("%d ,", p);
  }
  return 0;
}