class Solution {
public:
    vector<vector<int>> dp;

    int check(vector<int>& coin, int s, int n) {

        if(n == 0) {
            return (s % coin[0] == 0);
        }

        if(dp[n][s] != -1)
            return dp[n][s];

        int take = 0;

        if(coin[n] <= s)
            take = check(coin, s - coin[n], n);

        int nottake = check(coin, s, n - 1);

        return dp[n][s] = take + nottake;
    }

    int count(vector<int>& coins, int sum) {

        int n = coins.size();

        dp.resize(n, vector<int>(sum + 1, -1));

        return check(coins, sum, n - 1);
    }
};