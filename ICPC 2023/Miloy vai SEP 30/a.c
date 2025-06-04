//prince

#include <stdio.h>

int main()
{
    long long int n, sum = 0, i;

    while (scanf("%lld", &n) != EOF)
    {
        long long int arr[n];
        sum = 0;

        for (i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            sum = sum + arr[i];
        }

        if (sum % 2 == 0)
        {
            printf("Lose\n");
        }
        else
        {
            printf("Win\n");
        }
    }

    return 0;
}
