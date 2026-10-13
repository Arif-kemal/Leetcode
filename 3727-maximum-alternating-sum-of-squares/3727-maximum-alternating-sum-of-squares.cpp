class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long toplam1=0,toplam2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int k=n/2;
        for(int i=0;i<n;i++){
            if(i<k){
                toplam2+=nums[i]*nums[i];
            }else{
                toplam1+=nums[i]*nums[i];
            }
        }
        return toplam1-toplam2;
    }
};