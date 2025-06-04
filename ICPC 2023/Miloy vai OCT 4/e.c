//prince

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,sum1=0,s2=0,s3=0;
        scanf("%lld",&n);
        for(i=1; i<n; i++)
        {
            if(i%3==0)
            {
                sum1 = sum1 + i;
            }
            else if(i%5==0)
            {
                s2 = s2+i;
            }
        }
        s3=sum1+s2;
        printf("%lld\n",s3);
    }

    return 0;
}