// C++ program to find the minimum number of coins
// to make a given change using memoization
#include <bits/stdc++.h>
using namespace std;

// Helper function with memoization
int minCoinsRecur(int i, int sum, vector<int> &coins, vector<vector<int>> &dp)
{
    // Base cases
    if (sum == 0)
    {
        return 0; // No coins needed if the sum is 0
    }
    if (sum < 0 || i == coins.size())
    {
        return INT_MAX; // Invalid case
    }

    // Check if result is already computed
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }

    int take = INT_MAX;

    // If taking the coin is possible
    if (coins[i] > 0)
    {
        int res = minCoinsRecur(i, sum - coins[i], coins, dp);
        if (res != INT_MAX)
        {
            take = res + 1;
        }
    }

    // Skipping the current coin
    int noTake = minCoinsRecur(i + 1, sum, coins, dp);

    // Store the result in dp array
    if (take < noTake)
    {
        dp[i][sum] = take;
    }
    else
    {
        dp[i][sum] = noTake;
    }

    return dp[i][sum];
}

int minCoins(vector<int> &coins, int sum)
{
    // Memoization table initialized with -1
    vector<vector<int>> dp(coins.size(), vector<int>(sum + 1, -1));

    int ans = minCoinsRecur(0, sum, coins, dp);
    if (ans != INT_MAX)
    {
        return ans; // Return the minimum number of coins
    }
    else
    {
        return -1; // Return -1 if no solution is found
    }
}

int main()
{
    vector<int> coins = {3, 1, 2};
    int sum = 5;
    cout << minCoins(coins, sum);

    return 0;
}
