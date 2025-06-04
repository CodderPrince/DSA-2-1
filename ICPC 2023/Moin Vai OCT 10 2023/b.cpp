// prince

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[100005], s2[100005];
    cin >> s1 >> s2;
    int len = strlen(s2);
    int len1 = strlen(s1);
    if (len != len1)
    {
        cout << "NO" << endl;
        return 0;
    }
    int i, swap = 0, x = 0, y = 0;
    for (i = 0; i < strlen(s1); i++)
    {
        if (s1[i] != s2[i])
        {
            x = x + s1[i];
            y = y + s2[i];
            swap = swap + 1;
        }
    }
    if (swap == 2 && x == y)
    {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;

    return 0;
}