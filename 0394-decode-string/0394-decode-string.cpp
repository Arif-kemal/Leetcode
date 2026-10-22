class Solution {
public:
    string decodeString(string s) {
        string arif="";
        int n=s.length();
        stack<int>sayilar;
        stack<string>kelimeler;
        int sayi=0;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                sayi = sayi * 10 + (s[i] - '0');
            }else if(s[i]=='['){
                sayilar.push(sayi);
                kelimeler.push(arif);
                sayi=0;
                arif="";
            }else if(s[i]==']'){
                int tekrar=sayilar.top();
                sayilar.pop();
                string onceki=kelimeler.top();
                kelimeler.pop();
                string gecici="";

                for(int j=0;j<tekrar;j++){
                    gecici+=arif;
                }
                arif=onceki+gecici;
            }else{
                arif+=s[i];
            }
        }
        return arif;
    }
};