class Solution {
public:
    unsigned int dp[1000000+10];
    int mod =1000000007;
    int waysToStep(int n) {
        //dp[n]=dp[n-1]+dp[n-2]+dp[n-3]
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        for(int i=4;i<=n;i++)
            dp[i]=(dp[i-1]%mod+dp[i-2]%mod+dp[i-3]%mod)%mod;
        return dp[n];
    }
};