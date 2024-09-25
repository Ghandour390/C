#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    float r;
    printf("entre le nombre N=  ");
    scanf("%d",&N);
    r=N%2;
    if (r==0)
    printf("le nombre est pair");
    else 
    printf("le nombre est impair");
    return 0;
} 