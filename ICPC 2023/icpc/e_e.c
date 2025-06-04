// Ethernal_Entrophy

#include <stdio.h>

int main()
{
    long long int t;
    scanf("%lld", &t);

    for (long long int s = 1; s <= t; s++)
    {
        long long int N;
        scanf("%lld", &N);

        long long int A[N], i, j, count = 0;

        for (i = 0; i < N; i++)
        {
            scanf("%lld", &A[i]);
        }

        long long int prefixSum[N + 1];
        prefixSum[0] = 0;

        for (i = 0; i < N; i++)
        {
            prefixSum[i + 1] = prefixSum[i] + A[i];
        }

        for (i = 0; i < N; i++)
        {
            for (j = i; j < N; j++)
            {
                long long int subarraySum = prefixSum[j + 1] - prefixSum[i];

                if (subarraySum != (j - i + 1) * A[i])
                {
                    count++;
                }
            }
        }

        printf("Case %lld: %lld\n", s, count);
    }

    return 0;
}