//prince

#include <stdio.h>

int main() 
{
    
    long long int n,k;
    scanf("%lld %lld", &n, &k);
    
    long long int primes[k],i,j;
    for (i = 0; i < k; i++) 
    {
        scanf("%lld", &primes[i]);
    }

    long long int count = 0;
       
    for (i = 1; i <= n; i++) 
    {
        long long int divisible = 0;
        
        for (j = 0; j < k; j++) 
        {
            if (i % primes[j] == 0) 
            {
                divisible = 1;
                break;
            }
        }
       
        if (divisible) 
        {
            count++;
        }
    }
    printf("%lld\n", count);
    
    return 0;
}
