#include <stdio.h>

long long p_bonacci(int N, int P) {
    if (N < P) return N;

    long long* dp = (long long*)malloc((N + 1) * sizeof(long long));
    for (int i = 0; i <= N; i++) {
        dp[i] = -1;
    }

    long long ans = 0;
    for (int i = 1; i <= P; i++) {
        ans += p_bonacci(N - i, P, dp);
    }

    free(dp);
    return ans;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int case_num = 1; case_num <= T; case_num++) {
        int N, P;
        long long K;
        scanf("%d %d %lld", &N, &P, &K);

        // Calculate the Nth P-bonacci number
        long long result = p_bonacci(N, P);

        // Check if K is valid
        if (K > N) {
            printf("Case %d: Invalid\n", case_num);
        } else {
            // Find the caller and callee of the K-th call
            int caller = N;
            int callee = 0;
            for (int i = 0; i < K; i++) {
                int temp = 0;
                for (int j = 1; j <= P; j++) {
                    if (i - j >= 0) {
                        temp += p_bonacci(i - j, P);
                    }
                }
                callee = temp;
                caller--;
            }
            printf("Case %d: %d %d\n", case_num, caller, callee);
        }
    }
    return 0;
}
