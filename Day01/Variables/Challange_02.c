#include <stdio.h>

int main() {
   float c ;
   float k;
   printf("entre le temperature en degre c:  ");
   scanf("%f",&c);
      k=c+273,15;
   printf("le temperature en kelvin c'est k=%0.2f",k);
    return 0;
}