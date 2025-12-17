class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n){
        int mal=flowerbed.size();
        if(n==0){return true;}
        for(int i=0;i<mal;i++){
            if(flowerbed[i]==1){continue;}
            bool sag=(i==mal-1)||(flowerbed[i+1]==0);
            bool sol=(i==0)||(flowerbed[i-1]==0);
            if(sag&&sol){
                n--;
                flowerbed[i]=1;
                if(n==0)return true;
            }
        }
        return false;
    }
};