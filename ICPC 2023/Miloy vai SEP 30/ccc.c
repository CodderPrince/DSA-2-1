#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[10000001],p[10000001],i,a,b,m,x[1000001];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
        p[i]=arr[i];
    }
    
    
    for(i=1; i<n; i++)
    {
        if(p[i]<arr[i-1])
        {
            x[b]=arr[i-1];
            m++;
        }
    }

    printf("%lld\n",m);
    
}