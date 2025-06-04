//Ethernal Entrophy

#include <stdio.h>

const long long int MOD = 1000000007;
long long int factorial[1000001];

void calculateFactorials() 
{
    factorial[0] = 1;
    for (int i = 1; i <= 1000000; i++) 
    {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
}


long long int modPow(long long int a, long long int b) 
{
    long long int result = 1;
    while (b > 0) 
    {
        if (b % 2 == 1) 
        {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

int main() {
    calculateFactorials();
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        
        long long int fa = factorial[a];
        long long int fb = factorial[b];
        long long int fsb = factorial[a - b];
        
        long long int mul = (fb * fsb) % MOD;
        long long int dv = (fa * modPow(mul, MOD - 2)) % MOD;
        
        printf("%lld\n", dv);
    }

    return 0;
}
