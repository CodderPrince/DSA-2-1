//prince

#include<stdio.h>

int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n,l,i,j,sum=0;
        scanf("%lld",&n);
        for(i=2; i<=n; i++)
        {
            for(j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(j*j>i)
            {
                sum+=i;
            }
            
        }
        printf("%lld\n",sum);
    }

    return 0;
}