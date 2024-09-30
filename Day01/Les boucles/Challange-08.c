#include <stdio.h>

int main()
{
  int n;
  float Un, U1, U2;
  do
  {
    printf("Entrez un nombre n=  \n");
    scanf("%d", &n);
    U1 = 0;
    U2 = 1;
  } while (n < 2);
  printf(" F(1) = %f \n", U1);
  printf(" F(2) = %f \n", U2);
  for (int i = 2; i <= n; i++)
  {
    Un = U1 + U2;
    U1 = U2;
    U2 = Un;
  }
  printf(" F(%d) = %f \n", n, Un);

  return 0;
}
