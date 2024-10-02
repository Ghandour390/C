#include <stdio.h>
#include<stdlib.h>
int a,b,min;
int minumum(int a,int b){
    min=a;
    if(min>b)
    min=b;
    return min;
}
int main(){
    printf("entre a:  " );
    scanf("%d",&a );

     printf("entre b:  " );
    scanf("%d",&b );
  int resultat=minumum(a,b);
printf("lE min de  de a et b=%d", resultat);
return 0;
    
}