#include <bits/stdc++.h>
using namespace std;

#define MAX 1000005

int spf[MAX];

void sieve() {
  for (int i = 2; i * i < MAX; i++) {
    if (spf[i] == 0) {
      spf[i] = i;
      for (int j = i * i; j < MAX; j += i) {
        if (spf[j] == 0) {
          spf[j] = i;
        }
      }
    }
  }
}

int countPrimeFactors(int n) {
  int count = 0;
  while (n > 1) {
    int prime = spf[n];
    count++;
    while (n % prime == 0) {
      n /= prime;
    }
  }
  return count;
}

bool isPerfectPrimeFactor(int n, int arr[], int idx) {
  for (int i = 0; i < idx; i++) {
    if (arr[i] % n != 0) {
      return false;
    }
  }
  return true;
}

int longestSubarrayWithAlmostPrimeFactorsAndNoPerfectPrimeFactor(int arr[], int n, int k) {
  int maxLength = 0;
  int count[MAX] = {0};
  int start = 0;
  int end = 0;

  while (end < n) {
    int primeFactorCount = countPrimeFactors(arr[end]);
    count[primeFactorCount]++;

    if (primeFactorCount > k || isPerfectPrimeFactor(arr[end], arr, end)) {
      while (primeFactorCount > k || isPerfectPrimeFactor(arr[start], arr, end)) {
        int startPrimeFactorCount = countPrimeFactors(arr[start]);
        count[startPrimeFactorCount]--;
        start++;
      }
    }

    maxLength = max(maxLength, end - start + 1);
    end++;
  }

  return maxLength;
}

int main() {
  sieve();

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int maxLength = longestSubarrayWithAlmostPrimeFactorsAndNoPerfectPrimeFactor(arr, n, k);
    cout << maxLength << endl;
  }

  return 0;
}
