#include <stdio.h>

int main() {
   float kmh;
   float ms;
   printf("entre la vitasse en km/h:  ");
   scanf("%f",&kmh);
      ms = kmh * 0.27778;
   printf("le vitas dans m/s c'est km/s=%0.4f",ms);
    return 0;
}