//prince

#include <stdio.h>

int main() 
{
    long long int t;
    scanf("%lld", &t);
    while (t--) 
    {
        long long int a, b, c, i,n, mul=-1;
        scanf("%lld", &n);
        for (a = 1; a < n; a++) 
        {
            for (b = a + 1; b < n; b++) 
            { 
                c = n - a - b;
                if (a * a + b * b == c * c) 
                { 
                    i = a * b * c; 
                    if (i > mul) 
                    {
                        mul = i;
                    }
                }
            }
        }
        if (mul == -1) 
        {
            printf("-1\n");
        } 
        else 
        {
            printf("%lld\n", mul);
        }
    }

    return 0;
}
