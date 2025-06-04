#include <bits/stdc++.h>
using namespace std;

vector<int> computePrefixArray(const string& pattern) {
    int m = pattern.length();
    vector<int> prefixArray(m);
    int j = 0;

    for (int i = 1; i < m; i++) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = prefixArray[j - 1];
        }

        if (pattern[i] == pattern[j]) {
            j++;
        }

        prefixArray[i] = j;
    }

    return prefixArray;
}

void findOccurrences(const string& pattern, const string& text) {
    vector<int> prefixArray = computePrefixArray(pattern);
    int n = text.length();
    int m = pattern.length();
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j > 0 && text[i] != pattern[j]) {
            j = prefixArray[j - 1];
        }

        if (text[i] == pattern[j]) {
            j++;
        }

        if (j == m) {
            cout << i - m + 1 << endl;
            j = prefixArray[j - 1];
        }
    }
}

int main() {
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--) {
        int needleLength;
        string needle, haystack;
        cin >> needleLength >> needle >> haystack;

        findOccurrences(needle, haystack);

        if (numTestCases > 0) {
            // Output an empty line between test cases
            cout << endl;
        }
    }

    return 0;
}
