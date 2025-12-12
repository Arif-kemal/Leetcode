class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool>arr(right+1,true);
        arr[0]=false;
        arr[1]=false;
        vector<int>asal;
        //daha hızlı yapamayacağım max bu
        //ilk sorudan yardım aldım
        for(int i=2;i*i<=right;i++){
            if(arr[i]){
                for(int j=i;j*i<=right;j++){
                    arr[i*j]=false;
                }
            }
        }
        int k=0;
        for(int i=left;i<=right;i++){
            if(arr[i]){
                asal.push_back(i);
            }
        }
        
        if(asal.size()<2){return {-1,-1};}
        int minFark=INT_MAX;
        vector<int>sonuc;
        for (int i = 1; i < asal.size(); i++) {
            int fark = asal[i] - asal[i-1];
            
            if (fark < minFark) {
                minFark = fark;
                sonuc = {asal[i-1],asal[i]};
                if (minFark <= 2) return sonuc;
            }
        }
        return sonuc;

    }
};