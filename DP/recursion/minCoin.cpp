#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int coinChange(vector<int> &coins, int amount)
{
    // base case
    if (amount == 0)
    {
        return 0;
    }

    int ans = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        // if negative then ignore
        if (amount - coins[i] >= 0)
        {
            ans = min(ans, coinChange(coins, amount - coins[i]) + 1);
        }
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> coins = {1, 2, 5};
    cout << coinChange(coins, 11);

    return 0;
}
