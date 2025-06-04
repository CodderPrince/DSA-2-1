//Ethernal Entrophy

#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double x1,x2,x3,x4,root;
    root = b*b - 4*a*c;
    if(root>0)
    {
        x1 = (-b + sqrt(b*b - 4*a*c))/2*a;
        x2 = (-b - sqrt(b*b - 4*a*c))/2*a;

        printf("%0.0lf\n",x1);
        printf("%0.0lf\n",x2);
    }
    else if(root==0.0)
    {
        x3=x4= -b/2*a;
        printf("%0.0lf\n",x3);
        printf("%0.0lf\n",x4);
    }
    /*else
    {
        x1= -b/2*a;
        x3 = sqrt(-root)/2*a;
        printf("")
    }*/

    return 0;
}
