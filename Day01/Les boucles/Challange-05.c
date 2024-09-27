#include <stdio.h>

int main() {
   
   int b,i,p,k;
   if(p==0){
    printf("%d^%d=1 ",b,p) ;
   } else
   {
   printf("entre la base:  ");
     scanf("%d",&b); 
      k=b;
     printf("entre la puissance:  ");
     scanf("%d",&p);
   
   for( i=1;i<p;i++){
    k=k*b;
   printf("%d^%d=%d ",b,p,k) ;
   }}
    return 0;
}