#include <stdio.h>

long long int prime(long long int n);
int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        long long int n;
        scanf("%lld", &n);

        long long int result = prime(n);
        printf("%lld\n", result);
    }

    return 0;
}

long long int prime(long long int n) 
{
    long long int largest = -1;

    
    while (n % 2 == 0) 
    {
        largest = 2;
        n = n/2;
    }

    for (long long int i = 3; i * i <= n; i = i+2) 
    {
        while (n % i == 0) 
        {
            largest = i;
            n = n/i;
        }
    }

    if (n > 2) 
    {
        largest = n;
    }

    return largest;
}


