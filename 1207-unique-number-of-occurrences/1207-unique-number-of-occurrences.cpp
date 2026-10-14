class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> sacid;
        for(int x:arr){
            sacid[x]++;
        }
        unordered_set<int>set;
        for(auto x:sacid){
           if(set.count(x.second)){
            return false;
           }else{
            set.insert(x.second);
           }
        }
        return true;
    }
};