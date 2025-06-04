//prince

#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        long long y, x;
        scanf("%lld %lld", &y, &x);

        long long max;

        if (y > x) 
        {
            max = y;
        } 
        else 
        {
            max = x;
        }

        long long result;

        if (max % 2 == 0) 
        {
            if (y >= x) 
            {
                result = max * max - x + 1; 
            } 
            else 
            {
                result = (max - 1) * (max - 1) + y; 
            }
        } 
        else 
        {
            if (x >= y) 
            {
                result = max * max - y + 1; 
            } 
            else 
            {
                result = (max - 1) * (max - 1) + x; 
            }
        }

        printf("%lld\n", result);
    }

    return 0;
}
