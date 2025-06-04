//prince

#include <stdio.h>

int main() 
{
    long long int n, a, b;
    scanf("%lld %lld %lld", &n, &a, &b);   
    long long int result = 0;   
    long long int multiplier = 1;       
    while (n > 0) 
    {
        int digit = n % 10;            
        if (digit == a) 
        {
            digit = b;             
        }        
        result = result + digit * multiplier;                 
        n = n/10;
        multiplier = multiplier*10;
    }   
    printf("%lld\n", result);
    
    return 0;
}
