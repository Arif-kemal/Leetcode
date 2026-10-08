class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),toplam=0,bas=0,son=0;
        int maxt=0;
        for(int son=0;son<n;son++){
            if(nums[son]==0){
                toplam++;
            }
            while(toplam>k){
                if(nums[bas]==0){
                    toplam--;
                }
                bas++;
            }
            maxt=max(maxt,son-bas+1);
        }
        return maxt;
    }
};