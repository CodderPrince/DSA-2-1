// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= 4 * N; i = i + 4)
    {
        cout << i << " " << i + 1 << " " << i + 2 << " PUM" << endl;
    }

    return 0;
}
