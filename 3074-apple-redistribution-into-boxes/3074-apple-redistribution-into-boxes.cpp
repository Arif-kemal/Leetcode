class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int num=0;
        for(int i=0;i<apple.size();i++){
            num+=apple[i];
        }
        int sepet=0;
        for(int i=0;i<capacity.size();i++){
           sepet+=capacity[i];
           printf("%d",sepet);
           if(sepet>=num){return i+1;} 
        }
        return -1;
    }
};