#include <stdio.h>

int canPartition(int prefix[], int length) {
    int i, j, k;
    int sum = 0;

    for (i = 0; i < length; i++) {
        sum += prefix[i];
    }

    if (sum % 3 != 0) {
        return 0;
    }

    int targetSum = sum / 3;
    int count = 0;
    int partitionSum = 0;

    for (i = 0; i < length - 1; i++) {
        partitionSum += prefix[i];

        if (partitionSum == targetSum) {
            count++;
            partitionSum = 0;

            if (count == 2) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int caseNumber = 1; caseNumber <= t; caseNumber++) {
        int n;
        scanf("%d", &n);

        int sequence[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &sequence[i]);
        }

        printf("Case %d:\n", caseNumber);

        for (int i = 0; i < n; i++) {
            int prefix[i + 1];
            for (int j = 0; j <= i; j++) {
                prefix[j] = sequence[j];
            }

            int result = canPartition(prefix, i + 1);
            printf("%d\n", result);
        }
    }

    return 0;
}