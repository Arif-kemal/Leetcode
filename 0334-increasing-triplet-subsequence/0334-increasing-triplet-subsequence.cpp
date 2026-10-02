class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size(),ilk=INT_MAX,ikinci=INT_MAX;
        for(int i=0;i<n;i++){
           if(ilk>=nums[i])ilk=nums[i];
           else if(ilk<nums[i]&&ikinci>=nums[i])ikinci=nums[i];
           else if(nums[i]>ikinci)return true;
        }
        return false;
    }
};