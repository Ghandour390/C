#include <stdio.h>

int main() {
   
   int n,i,s=0;
   printf("entre le number:  ");
     scanf("%d",&n);
   for( i=1;i<=n;i++){
    s=s+i;
   }
   printf("la somme est: %d",s) ;
    return 0;
}