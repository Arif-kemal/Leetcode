class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        int max=0,k=0;
        vector<bool>arr;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        for(int j=0;j<candies.size();j++){
            if(candies[j]+extra>=max){
                arr.push_back(true);
            }else{
                arr.push_back(false);
            }
        }
        return arr;
        
    }
};