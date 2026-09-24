class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int k=nums[i];
            if(k<10&&k==i)return i;
            if(k<10&&k!=i)continue;
            int toplam=0;
            while(k>0){
               if(i<k%10)break;
               toplam+=k%10;
               if(i<toplam)break;
               k=k/10;
            }
              if(toplam==i&&toplam>k)return i;
              
        }
        return -1;
    }
};