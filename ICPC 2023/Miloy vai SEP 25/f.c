//prince

#include <stdio.h>

int main() 
{
    long long sum = 0;
    long long n;

    while (scanf("%lld", &n) != EOF) 
    {
        sum = sum+n;
    }

    printf("%lld\n", sum);
    
    return 0;
}
