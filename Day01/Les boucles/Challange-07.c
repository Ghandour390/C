#include <stdio.h>

int main()
{
   int N, inv = 0;

   printf("Entrez un nombre n=  \n");
   scanf("%d", &N);
   while (N != 0)
   {
      inv = inv * 10;
      inv = inv + N % 10;
      N = N / 10;
   }
   printf("Le nombre inverse est = %d\n", inv);

   return 0;
}