//Prince

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n, c3,c5,c15,s3,s5,s15,sum=0;
        scanf("%lld",&n);
        n--;
        c3 = n/3;
        s3 = (3 * c3 * (c3+1))/2;
        c5 = n/5;
        s5 = (5 * c5 * (c5+1))/2;
        c15 = n/15;
        s15 = (15 * c15 * (c15+1))/2;

        sum = s3 + s5 - s15;
        printf("%lld\n",sum);
    }

    return 0;
}