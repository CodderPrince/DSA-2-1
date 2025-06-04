// C++ program to find the minimum number of coins
// to make a given change using memoization
#include <bits/stdc++.h>
using namespace std;

// Helper function with memoization
int minCoinsRecur(int i, int sum, int coins[], int n, int dp[][3])
{
    // Base cases
    if (sum == 0)
    {
        return 0; // No coins needed if the sum is 0
    }
    if (sum < 0 || i == n)
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
        int res = minCoinsRecur(i, sum - coins[i], coins, n, dp);
        if (res != INT_MAX)
        {
            take = res + 1;
        }
    }

    // Skipping the current coin
    int noTake = minCoinsRecur(i + 1, sum, coins, n, dp);

    cout << "DP table:\n";
    int ii, jj;
    for (auto ii = 0; ii < 3; ii++)
    {
        for (jj = 0; jj < 3; jj++)
        {
            cout << dp[ii][jj] << "\t\t";
        }
        cout << endl;
    }

    cout << "Take : " << take << endl;
    cout << "No Take : " << noTake << endl;

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

int minCoins(int coins[], int n, int sum)
{
    // Memoization table initialized with -1
    int dp[3][3];
    memset(dp, -1, sizeof(dp));

    int ans = minCoinsRecur(0, sum, coins, n, dp);

    cout << "DP table:\n";
    int i, j;
    for (auto i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << dp[i][j] << "\t\t";
        }
        cout << endl;
    }

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
    int coins[] = {1, 2};
    int n = sizeof(coins) / sizeof(coins[0]);
    int sum = 2;
    cout << minCoins(coins, n, sum);

    return 0;
}