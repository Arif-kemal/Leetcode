class Solution {
public:
    string reverseWords(string s) {
        string sonuc="";
        string oanki="";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                oanki+=s[i];
            }else{
                if(oanki!=""){
                  if(sonuc==""){
                    sonuc=oanki;
                  }else{
                    sonuc=oanki+" "+sonuc;
                  }
                  oanki="";
                }
            }
        }
        if(oanki!=""){
                if(sonuc==""){
                    sonuc=oanki;
                }else{
                    sonuc=oanki+" "+sonuc;
                }
            }
        return sonuc;
        
    }
};