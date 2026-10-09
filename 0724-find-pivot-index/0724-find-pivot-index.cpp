class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(),toplam=0;
        for(int i=0;i<n;i++){
            toplam+=nums[i];
        }
        int alt=0;
        double ort=0.0;
        for(int i=0;i<n;i++){
            ort=(toplam-nums[i])/2.0;
           if(alt==ort)return i;
           alt+=nums[i];
        }
        return -1;
    }
};