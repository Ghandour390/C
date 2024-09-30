#include <stdio.h>

int main()
{
   float km;
   float yard;
   printf("entre la lenge en km:  ");
   scanf("%f", &km);
   yard = km * 1093.61;
   printf("la distence en yard c'est k=%0.2f", yard);
   return 0;
}