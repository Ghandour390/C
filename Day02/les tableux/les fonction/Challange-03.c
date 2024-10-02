#include <stdio.h>
#include<stdlib.h>
int a,b,max;
int maximum(int a,int b){
    max=a;
    if(max<b)
    max=b;
    return max;
}
int main(){
    printf("entre a:  " );
    scanf("%d",&a );

     printf("entre b:  " );
    scanf("%d",&b );
  int resultat=maximum(a,b);
printf("lE MAX de  de a et b=%d", resultat);
return 0;
    
}