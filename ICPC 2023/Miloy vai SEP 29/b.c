//prince

#include<stdio.h>

int main()
{
        long long int i,total_sum=0, n;
        scanf("%lld",&n);
        total_sum = n*(n+1)/2;
        int array[n];
        for(i=1; i<=(n-1); i++)
        {
            scanf("%lld",&array[i]);
            total_sum = total_sum - array[i];
        }

        printf("%lld\n",total_sum);

    return 0;
}