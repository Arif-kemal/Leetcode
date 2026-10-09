class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size(),toplam=0,maxt=0;
        for(int i=0;i<n;i++){
            toplam+=gain[i];
            maxt=max(maxt,toplam);
        }
        return maxt;
    }
};