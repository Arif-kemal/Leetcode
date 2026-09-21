class Solution {
public:
    bool buyuk(char c){
       c=tolower(c);
       return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    string reverseVowels(string s) {
      int sol=0,sag=s.length()-1;
      while(sol<sag){
        if(buyuk(s[sol])){
            if(buyuk(s[sag])){
                swap(s[sol],s[sag]);
                sag--;
                sol++;
            }else{sag--;}
        }else{sol++;}
      } 
      return s; 
    }
};