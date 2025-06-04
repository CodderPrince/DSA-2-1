#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long countNonBeautifulSubarrays(const vector<int>& A) {
    unordered_map<int, int> countMap;
    long long count = 0;
    int left = 0;
    int right = 0;
    int n = A.size();

    while (right < n) {
        countMap[A[right]]++;
        while (countMap.size() > 1) {
            count += n - right;
            countMap[A[left]]--;
            if (countMap[A[left]] == 0) {
                countMap.erase(A[left]);
            }
            left++;
        }
        right++;
    }

    while (left < n) {
        count += n - left;
        left++;
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long result = countNonBeautifulSubarrays(A)-1;
        cout << "Case " << caseNum << ": " << result << endl;
    }

    return 0;
}