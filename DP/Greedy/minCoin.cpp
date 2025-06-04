/*
Number of minimum coin needed
Approach: Greedy
*/

#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int> &coins, int amount)
{
    // Sort coins in descending order
    sort(coins.rbegin(), coins.rend());

    int count = 0;

    for (int i = 0; i < coins.size(); i++)
    {
        while (amount >= coins[i])
        {
            amount -= coins[i];
            count++;
        }
    }

    if (amount == 0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> coins = {1, 2, 5};
    int amount = 11;

    int result = coinChange(coins, amount);

    cout << result << endl;

    return 0;
}
