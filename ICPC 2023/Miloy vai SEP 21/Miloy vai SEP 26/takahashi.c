//prince

#include<stdio.h>

int main()
{
    long long int x,a,b;
    scanf("%lld %lld %lld",&x,&a,&b);
    
    if((b-a)<=0)
    {
        printf("delicious\n");
    }
    else if((b-a)<=x)
    {
        printf("safe\n");
    }
    else
    {
        printf("dangerous\n");
    }

    return 0;
}