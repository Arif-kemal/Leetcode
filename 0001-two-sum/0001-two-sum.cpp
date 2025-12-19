class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int c=i+1;c<nums.size();c++){
                if(nums[i]+nums[c]==target){
                    vector<int> arr;
                    arr.push_back(i);
                    arr.push_back(c);
                    return arr;
                } 
            }
        }
        return {};
    }
};