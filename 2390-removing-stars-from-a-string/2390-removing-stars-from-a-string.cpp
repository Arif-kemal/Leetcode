class Solution {
public:
    string removeStars(string s) {
        stack<char>as;
        int n=s.length();
        string arif="";
        for(int i=0;i<n;i++){
            if(s[i]!='*'){
                as.push(s[i]);
            }else{
                as.pop();
            }
        }
        int n1=as.size();
        for(int i=0;i<n1;i++){
            arif.push_back(as.top());
            as.pop();
        }
        reverse(arif.begin(),arif.end());
        return arif;
    }
};