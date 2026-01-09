class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int toplam=0,n=nums.size();
        int sag=0,sol=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                sag=i;
                toplam=max(toplam,sag-sol+1);
            }else{
                sol=i+1;
                sag=i+1;
            }
        }
        return toplam;
    }
};