#include<stdio.h>

long long int fib(long long int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
    return 0;
}

int main()
{
    long long int n;
    scanf("%lld",&n);
    printf("%lld\n",fib(n));

    return 0;
}