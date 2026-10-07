class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double toplam=0.0,yeni_toplam=INT_MIN;
        for(int i=0;i<k;i++){
            toplam+=nums[i];
        }
        if(n<=k)return toplam/k;
        for(int i=1;i<=n-k;i++){
            if(yeni_toplam<toplam)yeni_toplam=toplam;
            toplam-=nums[i-1];
            toplam+=nums[i+k-1];
        }
        if(yeni_toplam<toplam)yeni_toplam=toplam;
        return yeni_toplam/k;

    }
};