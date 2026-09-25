class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size(),yer=0;
        vector<int> arif;
        for(int i=0;i<n;i++){
            yer=abs(nums[i])-1;
            if(nums[yer] > 0) {
              nums[yer] = -nums[yer];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0)arif.push_back(i+1);
        }
        return arif;
    }
};