#include <stdio.h>
#define MOD 1000000007

typedef long long int ll;

// Matrix exponentiation algorithm
ll matrix_expo(ll matrix[][2], ll n) {
  if (n == 0) {
    return 1;
  }

  ll temp_matrix[][2] = {{1, 0}, {0, 1}};

  // Calculate the power of the matrix
  while (n > 1) {
    if (n % 2 == 1) {
      // Multiply the matrix by itself
      for (ll i = 0; i < 2; i++) {
        for (ll j = 0; j < 2; j++) {
          ll sum = 0;
          for (ll k = 0; k < 2; k++) {
            sum = (sum + matrix[i][k] * matrix[k][j]) % MOD;
          }
          temp_matrix[i][j] = sum;
        }
      }

      // Copy the temporary matrix back to the original matrix
      for (ll i = 0; i < 2; i++) {
        for (ll j = 0; j < 2; j++) {
          matrix[i][j] = temp_matrix[i][j];
        }
      }
    }

    // Divide the power of the matrix by 2
    n /= 2;
  }

  // Return the first element of the matrix
  return matrix[0][0];
}

int main() {
  ll n;
  scanf("%lld", &n);

  // Create the Fibonacci matrix
  ll matrix[][2] = {{1, 1}, {1, 0}};

  // Calculate the nth Fibonacci number modulo 109+7
  ll result = matrix_expo(matrix, n);

  // Print the result
  printf("%lld\n", result);

  return 0;
}
