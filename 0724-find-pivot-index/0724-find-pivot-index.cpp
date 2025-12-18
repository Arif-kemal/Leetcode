 class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t=0,a=0;
        for(int i=0;i<nums.size();i++){
            t+=nums[i];
        }
        for(int k=0;k<nums.size();k++){
            a+=nums[k];
            if(a==t){
                return k;
            }
            t-=nums[k];
        }
        return -1;
    }
};