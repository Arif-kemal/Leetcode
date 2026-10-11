class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size(),toplam=0;
        for(int i=0;i<n;i++){
            if(!(n%(i+1))){
                toplam+=pow(nums[i],2);
            }
        }
        return toplam;
    }
};