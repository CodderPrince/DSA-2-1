//PRINCE

#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);
    
    while (t--) 
    {
        long long int n;
        scanf("%lld", &n);

        long long int a = 1, b = 2, sum = 0,temp;
        
        while (b <= n) 
        {
            if (b % 2 == 0) 
            {
                sum = sum + b;
            }

            temp = a;
            a = b;
            b = temp + b;
        }

        printf("%lld\n", sum);
    }

    return 0;
}
