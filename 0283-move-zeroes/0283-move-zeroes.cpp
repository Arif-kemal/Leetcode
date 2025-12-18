class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    vector<int> arr;
    vector<int> arr2;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) arr.push_back(nums[i]);
        else arr2.push_back(nums[i]);
    }
    arr2.insert(arr2.end(),arr.begin(),arr.end());
//    for(int k=0;k<nums.size();k++){
  //      cout<<arr2[k]<<",";
    //}
    nums=arr2;
    }
};