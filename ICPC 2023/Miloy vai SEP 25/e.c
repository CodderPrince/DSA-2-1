//prince

#include<stdio.h>

int main()
{
    long long int n,y;
    scanf("%lld",&n);
    y=n;
    long long int count=1,res=0,x;
    while(n>0)
    {
        x = n%10;
        res = res*10 + x;
        n = n/10;
       // count = count*10;
    }
    if(res==y)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}