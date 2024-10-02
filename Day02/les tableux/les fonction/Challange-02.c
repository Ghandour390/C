#include <stdio.h>
#include<stdlib.h>
int a,b,p;
int produit(int a,int b){
    int p=a*b;
    return p;
}
int main(){
    printf("entre a:  " );
    scanf("%d",&a );

     printf("entre b:  " );
    scanf("%d",&b );
  int resultat=produit(a,b);
printf("le produit de a*b=%d", resultat);
return 0;
    
}