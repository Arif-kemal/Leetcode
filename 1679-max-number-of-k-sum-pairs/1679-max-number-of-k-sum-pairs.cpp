class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size(),sol=0,sag=n-1,toplam=0,fark=-1;
        sort(nums.begin(),nums.end());
        while(sol<sag){
            fark=nums[sol]+nums[sag];
            if(k==fark){
                toplam++;
                sol++;
                sag--;
            }else if(fark<k){
                sol++;
            }else{
                sag--;
            }
        }
        return toplam;
    }
};