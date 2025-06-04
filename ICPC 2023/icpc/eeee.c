// Ethernal_Entrophy

#include <stdio.h>
#include<math.h>

int main()
{
    long long int T,s;
    scanf("%lld", &T);

    for (long long int s = 1; s <= T; s++)
    {
        long long int N;
        scanf("%lld", &N);

        long long int A[N], i, j, k, count = 0;
        for (i = 0; i < N; i++)
        {
            scanf("%lld", &A[i]);
        }

        for (i = 0; i < N; i++)
        {
            for (j = i; j < N; j++)
            {
                long long int flag = 1;

                for (int k = i; k <= j; k++)
                {
                    if (A[k] != A[i])
                    {
                        flag = 0;
                        break;
                    }
                }

                if (!flag)
                {
                    count++;
                }
            }
        }

        printf("Case %lld: %lld\n", s, count);
    }

    return 0;
}