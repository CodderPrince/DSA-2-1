//Ethernal Entrophy

#include<stdio.h>
#include<math.h>
#define PI acos(-1)

int main()
{
    double r;
    scanf("%lf",&r);
    double res, cm;
    res = PI *r*r;
    cm = 2*PI*r;
    printf("%.6lf %.6lf\n",res,cm);

    return 0;
}