class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double toplam=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            toplam+=nums[i];
        }
        double maxtoplam=toplam;
        for(int i=k;i<n;i++){
            toplam=toplam+nums[i]-nums[i-k];
            maxtoplam=max(maxtoplam,toplam);
        }
        return maxtoplam/k;
    }
};