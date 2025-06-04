#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

int main() {
  int n;
  char matrix[MAX_N][MAX_N];
  int target[MAX_N][MAX_N];

  int T;
  scanf("%d", &T);
  for (int i = 1; i <= T; i++) {
    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
      scanf("%s", matrix[j]);
    }

    for (int j = 0; j < n; j++) {
      scanf("%s", target[j]);
    }

    int operations = 0;
    int possible = 1;

    for (int j = 0; j < n; j++) {
      // Check if the target matrix is achievable.
      int sum = 0;
      for (int k = 0; k < n; k++) {
        sum += matrix[j][k] - target[j][k];
      }
      if (sum % 2 != 0) {
        possible = 0;
        break;
      }

      // Perform the minimum number of operations to make the jth row match the target matrix.
      int diff = 0;
      for (int k = 0; k < n; k++) {
        if (matrix[j][k] != target[j][k]) {
          diff++;
        }
      }
      operations += diff / 2;
    }

    if (!possible) {
      printf("Case %d: -1\n", i);
    } else {
      printf("Case %d: %d\n", i, operations);
    }
  }

  return 0;
}
