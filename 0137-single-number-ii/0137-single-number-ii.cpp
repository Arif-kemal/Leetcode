class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sonuc=0;
        for(int i=0;i<32;i++){
            int bit=0;
            for(int sayi:nums){
                bit+=(sayi>>i)&1;
            }
            if(bit%3!=0){
                sonuc|=(1<<i);
            }
        }
        return sonuc;
    }
};