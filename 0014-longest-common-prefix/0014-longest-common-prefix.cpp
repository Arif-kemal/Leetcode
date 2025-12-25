class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs[0].size();
        for(int i=0;i<strs.size();i++){
            if(n >= strs[i].size() ){
                n=strs[i].size();
            }
        }
        string sonuc="";
        for(int j=0;j<n;j++){
            bool check=true;
            char harf=strs[0][j];
            for(int k=0;k<strs.size();k++){
                if(harf!=strs[k][j]){
                    check=false;
                    break;
                }
            }
            if(check==1){
                sonuc+=harf;
            }else{break;}
        }

        return sonuc;    
    }
};