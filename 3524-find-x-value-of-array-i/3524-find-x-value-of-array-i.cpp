class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long>sonuc(k,0);
        vector<long long>alt(k,0);

        for(int num:nums){
            vector<long long>sonra(k,0);
            int mod=num%k;
            sonra[mod]++;

            for(int rem=0;rem<k;rem++){
                if(alt[rem]>0){
                    int yeni_rem=(rem*mod)%k;
                    sonra[yeni_rem]+=alt[rem];
                }
            }
            for(int rem=0;rem<k;rem++){
                sonuc[rem]+=sonra[rem];
            }
            alt=sonra;
        }
        return sonuc;
    }
};