class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0,t=0;
        for(int i=0;i<gain.size();i++){
           t+=gain[i];
           if(max<t){
            max=t;
           }
        }
        return max;
    }
};