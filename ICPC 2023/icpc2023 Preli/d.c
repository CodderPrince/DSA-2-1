// Ethernal_Entrophy

#include <stdio.h>
#include <string.h>
#define MOD 998244353

int main()
{
    long long int t;
    scanf("%lld", &t);
    while (t--)
    {
        char str1[10001];
        char str2[10001];
        scanf("%s", str1);
        scanf("%s", str2);
        long long int ans;
        long long int count = 0;

        if (strcmp(str1, str2) == 0)
        {
            printf("%lld\n", strlen(str1) * strlen(str2));
        }
        else
        {
            for (long long int i = 0; i < strlen(str1); i++)
            {
                for (long long int j = 0; j < strlen(str2); j++)
                {
                    if (str1[i] == str2[j])
                    {
                        count++;
                    }
                }
            }
            printf("%lld\n", (count + 1) % MOD);
        }
    }
return 0;
}