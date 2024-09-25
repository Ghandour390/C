#include <stdio.h>
#include <math.h>
int main()
{
    float r, V;
    printf("entre la rayen r de sfere r:  ");
    scanf("%f", &r);
    V = (1 / 3) * (3.14 * r * r * r);
    printf("le volume V=%0.2f", V);
    return 0;
}