#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
  if (num <= 1) return false;
  if (num <= 3) return true;
  if (num % 2 == 0 || num % 3 == 0) return false;
  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0) return false;
  }
  return true;
}

int main() {
  int t;
  scanf("%d", &t);
   
  for (int caseNumber = 1; caseNumber <= t; caseNumber++) {
    int n, k;
    scanf("%d %d", &n, &k);
    int A[n];
     
    for (int i = 0; i < n; i++) {
      scanf("%d", &A[i]);
    }
     
    int left = 0, right = 0;
    int uniquePrimeFactors = 0;
    int maxSubarrayLength = 0;
     
    while (right < n) {
      if (!isPrime(A[right])) {
        if (uniquePrimeFactors == k) {
          // We have found K almost prime factors
          // Move the left pointer to find the longest subarray
          while (uniquePrimeFactors == k) {
            if (!isPrime(A[left])) {
              uniquePrimeFactors--;
            }
            left++;
          }
        }
        else if (uniquePrimeFactors < k) {
          if (!isPrime(A[right])) {
            uniquePrimeFactors++;
          }
        }
      }
       
      if (uniquePrimeFactors == k) {
        maxSubarrayLength = (right - left + 1) > maxSubarrayLength ? (right - left + 1) : maxSubarrayLength;
      }
       
      right++;
    }
     
  // Print the output in the required format
  printf("Case %d: %d\n", caseNumber, maxSubarrayLength);
  }
   
  return 0;
}