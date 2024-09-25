#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{float m;
printf("entre la moyenne:  ");
scanf("%0.2f",&m);
if(m<10)
printf("il est recalé");

else if(10<=m && m<12)
printf(" mention passable");
else if(12<=m && m<14){
printf("mention assez bien");}
else if(14<=m && m<16){
printf("mention bien");}
else (16<=m) ;{
printf("mention bien");
}
    return 0;
}