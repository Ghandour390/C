#include <stdio.h>
int main() {
   float a,b,c,d;
   printf("entrer la premiere moyenne= ");
        scanf("%f",&a);
    printf("entrer la 2eme moyenne= ");
        scanf("%f",&b);
    printf("entrer la trois eme moyenne= ");
     scanf("%f",&c);
     d=(a+b+c)/3;
     printf("la moyenne general=%0.2f ",d );
    return 0; 
}