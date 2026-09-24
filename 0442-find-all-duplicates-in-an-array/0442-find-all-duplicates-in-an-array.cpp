class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>arif;
        unordered_set<int> kutum;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(kutum.count(nums[i])==0){kutum.insert(nums[i]);}
            else{arif.push_back(nums[i]);}
        }
        return arif;
    }
};