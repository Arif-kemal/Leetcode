class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>arif=prices;
        int sonuc;
        for(int i=0;i<n-1;i++){
            sonuc=prices[i];
            for(int j=i+1;j<n;j++){
                if(sonuc>=prices[j]){
                    arif[i]=sonuc-prices[j];
                    break;
                }
            }
        }
        return arif;
    }
};