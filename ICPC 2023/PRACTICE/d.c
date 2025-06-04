#include <stdio.h>

int mod(int base, int power, int modulus) 
{
    long long result = 1;
    long long x = base % modulus;

    while (power > 0) 
    {
        if (power % 2 == 1) 
        {
            result = (result * x) % modulus;
        }
        x = (x * x) % modulus;
        power = power/2;
    }

    return (int) result;
}


int main() 
{
    int B, P, M;

    while (scanf("%d%d%d", &B, &P, &M) == 3) 
    {
        int result = mod(B, P, M);
        printf("%d\n", result);
        
        getchar();
        if (getchar() != '\n') 
        {
            break;
        }
    }

    return 0;
}
