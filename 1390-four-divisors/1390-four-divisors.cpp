class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int num=0;
        for(int i=0;i<nums.size();i++){
            int bolen=0;
            int toplam=0;
            for(int j=1;j*j<=nums[i];j++){
                if(nums[i]%j==0){
                   if(nums[i]/j!=j){
                    toplam+=nums[i]/j+j;
                    bolen+=2;
                   }
                   else{
                    toplam+=j;
                    bolen++;
                    }
                }
                if(bolen>4)break;
            }
            if(bolen==4)num+=toplam;
        }
        return num;
    }
};