#include <stdio.h>
#include <math.h>
int main() {
   float a,b,c,d;
   printf("entrer a= ");
        scanf("%f",&a);
    printf("entrer b= ");
        scanf("%f",&b);
    printf("entrer la c= ");
     scanf("%f",&c);
     d=pow((a+b+c),1/3);
     printf("la moyenne géométrique=%0.2f ",d );
    return 0; 
}