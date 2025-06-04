#include <stdio.h>

int main() {
    int n, i = 0, res = 0;
    scanf("%d", &n);

    while (n > 1) {
        printf("%d ", n);
        if (n % 2 != 0) {
            res = n * 3 + 1;
            printf("%d ", res);
            n = res;  // Update n with the new value
        } else if (n % 2 == 0) {
            n = n / 2;
            printf("%d ", n);
        }
    }
    printf("\n");

    return 0;
}
