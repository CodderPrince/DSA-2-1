#include <stdio.h>
#include <stdlib.h>
#include<math.h>
// Structure to store values and their indices
typedef struct {
    long long int value;
    long long int index;
} Element;

// Comparison function for sorting elements
int compare(const void *a, const void *b) {
    return ((Element *)a)->value - ((Element *)b)->value;
}

int main() {
    long long int n, x;
    scanf("%lld %lld", &n, &x);

    Element arr[n];
    for (long long int i = 0; i < n; i++) {
        scanf("%lld", &arr[i].value);
        arr[i].index = i + 1; // Store the 1-based index
    }

    // Sort the array based on values
    qsort(arr, n, sizeof(Element), compare);

    long long int left = 0, right = n - 1;
    while (left < right) {
        long long int sum = arr[left].value + arr[right].value;
        if (sum == x) {
            printf("%lld %lld\n", arr[left].index, arr[right].index);
            return 0;
        } else if (sum < x) {
            left++;
        } else {
            right--;
        }
    }

    printf("IMPOSSIBLE\n");

    return 0;
}
