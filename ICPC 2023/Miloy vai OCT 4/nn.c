#include <stdio.h>

#define MAX 1000000 // Adjust the maximum value as needed

int main() {
    long long int t;
    scanf("%lld", &t);

    while (t--) {
        long long int n;
        scanf("%lld", &n);
        long long int sum = 0;

        // Create an array to mark non-prime numbers
        int isNotPrime[MAX + 1];
        for (int i = 0; i <= MAX; i++) {
            isNotPrime[i] = 0;
        }

        for (int i = 2; i <= n; i++) {
            if (isNotPrime[i] == 0) { // i is a prime number
                sum += i;

                // Mark multiples of i as non-prime
                for (int j = 2 * i; j <= n; j += i) {
                    isNotPrime[j] = 1;
                }
            }
        }

        printf("%lld\n", sum);
    }

    return 0;
}
