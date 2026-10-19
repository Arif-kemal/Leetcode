class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int>arif=arr;
        sort(arif.begin(),arif.end());
        unordered_map<int,int>map;
        int k=1;
        for(int x:arif){
           if(map.count(x)==0){
            map[x]=k;
            k++;
           }

        }
        int i=0;
        for(int x:arr){
            arif[i]=map[x];
            i++;
        }
        return arif;
    }
};