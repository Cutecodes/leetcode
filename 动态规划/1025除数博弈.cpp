class Solution {
public:
    bool dp[1001];
    bool divisorGame(int N) {
        dp[2]=true;
        dp[3]=false;//边界
        for(int i=4;i<=N;i++){
            dp[i]=false;
            for(int j=1;j<i;j++){//遍历所有的子状态，如果存在一个子状态为输，则先手可必赢
                if(i%j==0&&dp[i-j]==false){
                    dp[i]=true;
                    break;
                }
            }
        }

        return dp[N];
    }
};