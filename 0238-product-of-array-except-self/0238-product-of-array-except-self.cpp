class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> arif(n);
        arif[0]=1;
        for(int i=1;i<n;i++){
            arif[i]=arif[i-1]*nums[i-1];
        }

        int right=1;
        for(int i=n-1;i>=0;i--){
            arif[i]=arif[i]*right;
            right*=nums[i];
        }

        return arif;
    }
};