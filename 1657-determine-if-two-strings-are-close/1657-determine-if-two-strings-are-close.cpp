class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.length(),n1=word2.length();
        if(n!=n1)return false;
        unordered_map<char,int>map1,map2;
        for(char x: word1){
            map1[x]++;
        }
        for(char x: word2){
           map2[x]++;
        }
        for(auto x:map1){
            if(map2.count(x.first)==0)return false;
        }

        vector<int> frekans1,frekans2;

        for(auto x: map1){
            frekans1.push_back(x.second);
        }
        for(auto x: map2){
            frekans2.push_back(x.second);
        }

        sort(frekans1.begin(),frekans1.end());
        sort(frekans2.begin(),frekans2.end());
        return frekans1==frekans2;
    }
};