class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),gorduk=0;
        vector<int>arif;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                arif.push_back(i);
                gorduk=1;
            }else if(gorduk){
                break;
            }
        }
        return arif;
    }
};