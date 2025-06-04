//PRINCE

#include <stdio.h>
#include<math.h>

int main() 
{
    long long int n;
    scanf("%d", &n);

    if (n == 1) 
    {
        printf("1\n");
    } 
    else if (n == 2 || n == 3) 
    {
        printf("NO SOLUTION\n");
    } 
    else 
    {
        long long int p[n];
        long long int even = 2;
        long long int odd = 1;
        long int i = 0;

        while (even <= n) 
        {
            p[i] = even;
            even = even+2;
            i++;
        }

        while (odd <= n) 
        {
            p[i] = odd;
            odd = odd + 2;
            i++;
        }

        for (i = 0; i < n; i++) 
        {
            printf("%d ", p[i]);
        }
        printf("\n");
    }

    return 0;
}
