//prince

#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,s1=0,s2=0,s3=0,i;
        scanf("%lld",&n);
        for(i=1; i<=n; i++)
        {
            s1 = s1+i;
        }
        s1 = s1*s1;
        for(i=1; i<=n; i++)
        {
            s2 = s2 + i*i;
        }
        s3 = s1-s2;
        printf("%lld\n",s3);
    }

    return 0;
}