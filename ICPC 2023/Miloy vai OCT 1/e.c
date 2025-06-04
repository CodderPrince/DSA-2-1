//Prince

#include <stdio.h>

int main() 
{
    long long int n, x;
    scanf("%lld %lld", &n, &x);

    long long int arr[n],i,j;
    for (i = 0; i < n; i++) 
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == x) 
            {
                printf("%lld %lld\n", i + 1, j + 1);
                return 0;
            }
        }
    }

    printf("IMPOSSIBLE\n");

    return 0;
}
