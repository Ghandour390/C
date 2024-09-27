#include <stdio.h>

int main() {
   
   int n,p=1,i;
   printf("entre le number:  ");
     scanf("%d",&n);
   for( i=1;i<n;i++){
    p=p*i;
   }
   printf("%d!=%d",n,p) ;
    return 0;
}