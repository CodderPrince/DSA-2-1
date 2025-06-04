//prince

#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int f,l;
    f= n/100;
    l=n%10;
    if(f>l)
    {
        printf("%lld\n",f);
    }
    else if(l>f)
    {
        printf("%lld",l);
    }
    else
    {
        printf("=\n");
    }

    return 0;
}