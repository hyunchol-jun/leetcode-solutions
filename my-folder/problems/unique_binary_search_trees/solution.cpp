class Solution {
public:
    int numTrees(int n) {     
        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;
        return recurTrees(dp, n);
    }
private:
    int recurTrees(vector<int>& dp, int n)
    {
        if (dp[n] == 0)
        {
            for (int i = 1; i <= n; ++i)
            {
                dp[n] += recurTrees(dp, i-1)*recurTrees(dp, n-i);
            }  
        } 
        return dp[n];
    }
};