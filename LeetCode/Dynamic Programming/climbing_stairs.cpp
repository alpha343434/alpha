class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        vector<int> dp(n+1);
        dp[0] = dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
// recursion: (time complexity O(n^2))
class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==0) return 1;
        else if(n==2) return 2;
        else{
            return climbStairs(n-1) + climbStairs(n-2);
        }
    }
};
