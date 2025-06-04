//prince

#include<stdio.h>

int main()
{
    long long first,last,p1,p2,i,count=0,max,min;
    scanf("%lld %lld %lld %lld",&first,&last,&p1,&p2);
    if(first<last)
    {
        max=last;
        min=first;
    }
    else
    {
        max=first;
        min=last;
    }
    for(i=min; i<=max; i++)
    {
        if(i%p1==0 || i%p2==0)
        {
            count++;
        }
    }
    printf("%lld\n",count);

    return 0;
}