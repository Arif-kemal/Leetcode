class Solution {
    int memo[1001][1001];
    int MOD=1e9+7;
public:
    int rearrangeSticks(int n, int k) {
        memset(memo,-1,sizeof(memo));
        return solve(n,k);
    }
    int solve(int n,int k){
        if(k==0) return 0;
        if(k==n) return 1;
        if(n==0) return 0;

        if(memo[n][k]!=-1) return memo[n][k];

        long long gorunur=solve(n-1,k-1);

        long long sakli= (long long) (n-1)* solve(n-1,k);

        return memo[n][k]=(sakli+gorunur)%MOD;
    }
};