//Ethernal Entrophy

#include<stdio.h>
#include<math.h>

#define PI acos(-1)
int main()
{
    int r;
    scanf("%d",&r);
    double res, cm;
    res = PI *r*r;
    cm = 2*PI*r;
    printf("%lf %lf\n",res,cm);

    return 0;
}