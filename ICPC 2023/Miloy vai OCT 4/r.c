//prince

#include <stdio.h>
#define MOD 1000000007

int main() 
{
    long long int n;
    scanf("%lld", &n);
    long long int a = 0, b = 1, temp;

    for (int i = 2; i <= n; i++) 
    {
        temp = (a + b) % MOD; 
        a = b;
        b = temp;
    }

    printf("%lld\n", b);

    return 0;
}
