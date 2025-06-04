#include <stdio.h>

unsigned long long int gcd(unsigned long long int a, unsigned long long int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

unsigned long long int lcm(unsigned long long int a, unsigned long long int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    unsigned long long int n, k;
    scanf("%llu %llu", &n, &k);

    unsigned long long int primes[k], i;
    for (i = 0; i < k; i++) {
        scanf("%llu", &primes[i]);
    }

    unsigned long long int count = 0;
    unsigned long long int lcm_product = 1;

    for (i = 0; i < (1 << k); i++) {
        unsigned long long int set_bits = 0;
        unsigned long long int current_lcm = 1;

        for (unsigned long long int j = 0; j < k; j++) {
            if (i & (1 << j)) {
                set_bits++;
                current_lcm = lcm(current_lcm, primes[j]);
            }
        }

        if (set_bits % 2 == 1) {
            count += n / current_lcm;
        } else {
            count -= n / current_lcm;
        }
    }

    printf("%llu\n", count);

    return 0;
}
