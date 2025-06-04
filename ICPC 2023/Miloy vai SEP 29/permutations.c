#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int i=0, even=2,odd=1, permutation[n];
    if(n==1)
    {
        printf("1\n");
    }
    else if(n==2 || n==2)
    {
        printf("NO SOLUTION\n");
    }
    else
    {
        while(even<=n)
        {
            permutation[i] = even;
            even = even + 2;
            i++;
        }
        while(odd<=n)
        {
            permutation[i] = odd;
            odd = odd+2;
            i++;
        }
        for(i=0; i<n; i++)
        {
            printf("%lld ",permutation[i]);
        }
        printf("\n");
    }    

    return 0;
}