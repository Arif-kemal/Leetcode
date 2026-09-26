class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>arif;
        int n=nums.size(),adet=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)adet++;
            else{
                arif.push_back(nums[i]);
            }
        }
        for(int i=0;i<adet;i++){
            arif.push_back(0);
        }
        nums=arif;
    }
};