#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2, D;
    printf("entrer x1= ");
    scanf("%f", &x1);
    printf("entrer x2= ");
    scanf("%f", &x2);
    printf("entrer y1= ");
    scanf("%f", &y1);
    printf("entrer y2= ");
    scanf("%f", &y2);
    D = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance=%0.2f ", D);
    return 0;
}