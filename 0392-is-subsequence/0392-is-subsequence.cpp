class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size(),k=s.size(),alt=0,es=0;
        if(k==0)return true;
        if(n==0)return false;
        for(int i=0;i<n;i++){
            if(s[alt]==t[i]){
                alt++;
                es++;
            }
            if(es==k)return true;
        }
        return false;
    }
};