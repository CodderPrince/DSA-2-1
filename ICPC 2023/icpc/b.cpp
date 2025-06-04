// Ethernal_Entrophy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i;
    for (i = 1; i <= t; i++)
    {
        int n, a;
        cin >> a >> n;
        int out = 0;
        for (int i = 1; i <= n; i++)
        {
            out += abs((i % a - (i % (a - 1))));
        }
        cout << "Case " << i << ": " << out << endl;
    }

    return 0;
}