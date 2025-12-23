class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size(),num=0;
        int sol=nums[0];
        for(int i=1;i<n-1;i++){
            if(nums[i]==nums[i+1]){continue;}
            else{
                if(nums[i]>sol &&nums[i]>nums[i+1])num++;
                if(nums[i]<sol&&nums[i]<nums[i+1])num++;
            }
            sol=nums[i];
        }
        return num;
    }
};