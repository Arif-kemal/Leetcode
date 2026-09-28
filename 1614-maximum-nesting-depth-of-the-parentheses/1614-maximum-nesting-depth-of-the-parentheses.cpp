class Solution {
public:
    int maxDepth(string s) {
        int derinlik=0,max_derinlik=0,n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                derinlik++;
                if(derinlik>max_derinlik){
                    max_derinlik=derinlik;
                }
            }else if(s[i]==')'){
                derinlik--;
            }
        }
        return max_derinlik;
    }
};