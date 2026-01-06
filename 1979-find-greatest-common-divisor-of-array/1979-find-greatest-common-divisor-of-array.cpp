class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=nums[0],max=nums[0],ebob=1;
        for(int i=1;i<nums.size();i++){
           if(min>=nums[i]){
            min=nums[i];
           }
           if(max<=nums[i]){
            max=nums[i];
           }
        }
        for(int j=2;j<=min;j++){
            if(min%j==0 && max%j==0){
                ebob=j;
            }
        }
        return ebob;
    }
};