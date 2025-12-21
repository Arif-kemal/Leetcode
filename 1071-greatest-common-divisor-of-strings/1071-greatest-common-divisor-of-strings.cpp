class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1)return "";
        int a=str1.size(),b=str2.size();
        int uzunluk=1;
        for(int i=min(a,b);i>0;i--){
            if(a%i==0 && b%i==0){
              uzunluk=i;
              break;
            }
        }
        return str1.substr(0,uzunluk);
    }
};