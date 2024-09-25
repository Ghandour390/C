#include <stdio.h>
#include <math.h>
int main()
{
    int N,n,n3,n2,n1;
    int r1,r2,r3,r4;
    printf("entre le nombre N=    ");
    scanf("%d",&N);
    n=N/1000;
    r1=N%1000;
    n1=r1/100;
    r2=r1%100;
    n2=r2/10;
    r3=r2/10;
   printf("le nombre inverse %d%d%d%d",1000*r3,100*n3,10*n1,n);
    return 0 ;
} 