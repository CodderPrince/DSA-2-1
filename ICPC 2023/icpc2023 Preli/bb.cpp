#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    for (int caseNumber = 1; caseNumber <= t; caseNumber++) 
    {
        int a, n;
        cin >> a >> n;

        // Initialize arrays to store precomputed values
        vector<int> modA(n + 1);
        vector<int> modAminus1(n + 1);

        // Precompute values for i % a and i % (a - 1)
        for (int i = 1; i <= n; i++) {
            modA[i] = i % a;
            modAminus1[i] = i % (a - 1);
        }

        int result = 0;

        for (int i = 1; i <= n; i++) {
            result += abs(modA[i] - modAminus1[i]);
        }

        cout << "Case " << caseNumber << ": " << result << endl;
    }

    return 0;
}
