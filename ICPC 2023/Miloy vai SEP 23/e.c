#include <stdio.h>

#define MAX_N (100001)
#define MOD (1000000007)

int A[MAX_N];
int prefix[MAX_N];

int main() {
  int t, k, i, a, b;
  
  scanf("%d %d", &t, &k);
  
  A[0] = 1;
  prefix[0] = 1;
  
  for (i = 1; i < MAX_N; i++) {
    if (i < k) {
      A[i] = 1;
    } else {
      A[i] = (A[i - 1] + A[i - k]) % MOD;
    }
    prefix[i] = (prefix[i - 1] + A[i]) % MOD;
  }
  
  for (i = 0; i < t; i++) {
    scanf("%d %d", &a, &b);
    if (!a) {
      printf("%d\n", prefix[b]);
    } else {
      printf("%d\n", (prefix[b] - prefix[a - 1] + MOD) % MOD);
    }
  }
  
  return 0;
}
