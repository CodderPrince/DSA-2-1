#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int lastEl[n];
    int res = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        int j = 0;
        while (j < res && lastEl[j] < x) {
            j++;
        }
        if (j == res) {
            lastEl[res++] = x;
        } else {
            lastEl[j] = x;
        }
    }
    printf("%d\n", res+1);
    return 0;
}
