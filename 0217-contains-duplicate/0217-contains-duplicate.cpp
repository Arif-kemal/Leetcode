class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> kutum;
        for(int i=0;i<nums.size();i++){
            if(kutum.count(nums[i])==0)kutum.insert(nums[i]);
            else{return true;}
        }
        return false;
    }
};