//PRINCE

#include <stdio.h>

int main()
 {
    long long int n;
    scanf("%lld", &n);
    
    long long int v[1000001]; 
    long long int pos[1000001] = {0}; 

    for (long long int i = 0; i < n; i++) 
    {
        scanf("%lld", &v[i]);
        pos[v[i]] = i;
    }

    long long int total_rounds = 1;

    for (long long int i = 1; i <= n; i++) 
    {
        if (pos[i] < pos[i - 1]) 
        {
            total_rounds++;
        }
    }

    printf("%lld\n", total_rounds);

    return 0;
}
