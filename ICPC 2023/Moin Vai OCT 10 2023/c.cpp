//prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin>>n;
    int p[3001] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (p[i] == 0)
        {
            for (int j = i; j <= n; j = j+i)
            {
                p[j]++;
            }
        }
        if (p[i] == 2)
            count++;
    }

   cout<<count<<endl;

    return 0;
}
