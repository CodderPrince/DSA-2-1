#include <stdio.h>
#include<math.h>

#define MOD 1000000007

int main() 
{
    long long int n, answer = 1;
    scanf("%lld",&n);
    for (int i = 0; i < n; i++) 
    {
        answer = answer;
        answer %= MOD;
    }
    cout << answer;
}
