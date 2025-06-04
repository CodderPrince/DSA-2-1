#include <stdio.h>

int main() 
{
    long long int n;
    scanf("%lld", &n);

    long long int arr[n],i;
    for (int i = 0; i < n; i++) 
    {
        scanf("%lld", &arr[i]);
    }

    long long moves = 0; 
    long long min_required = arr[0]; 

    for (i = 1; i < n; i++) 
    {
        if (arr[i] < min_required) 
        {
            
            moves = moves + min_required - arr[i];
        } 
        else 
        {
            min_required = arr[i];
        }
    }

    printf("%lld\n", moves);

    return 0;
}
