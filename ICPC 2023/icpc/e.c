// Ethernal_Entrophy

#include <stdio.h>
#include <math.h>

int main()
{
    long long int t, k,i;
    scanf("%lld", &t);
    for (k = 1; k <= t; k++)
    {
        long long int n, count1 = 0, count2 = 0, j, res = 0;
        scanf("%lld", &n);
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                count1++;
            }
        }
        long long int temp=n;
        for (i = 0; i < n; i++)
        {    temp=temp-1;
            count2=count2+temp;
        }
        res = count2 - count1;
        printf("Case %lld: %lld\n", k, res);
    }

    return 0;
}