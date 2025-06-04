#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int caseNumber = 1; caseNumber <= t; caseNumber++) {
        int a, n;
        cin >> a >> n;

        // Calculate the number of full cycles
        int fullCycles = n / (a - 1);

        // Calculate the remainder
        int remainder = n % (a - 1);

        // Calculate the result
        int result = fullCycles * (a - 1) * (a / 2) + remainder * a;

        cout << "Case " << caseNumber << ": " << result << endl;
    }

    return 0;
}
