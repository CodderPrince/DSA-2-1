#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int hashTable[1000001] = {0};

    for (int i = 0; i < n; i++) {
        int target = x - arr[i];

        
        if (target >= 0 && target <= 1000000 && hashTable[target] != 0) {
            printf("%d %d\n", hashTable[target], i + 1);
            return 0;
        }

        hashTable[arr[i]] = i + 1;
    }

    printf("IMPOSSIBLE\n");

    return 0;
}