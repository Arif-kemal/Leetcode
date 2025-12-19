class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i+1<s.length() && roman[s[i]]<roman[s[i+1]]) {
                result -= roman[s[i]];
            } else {
                result += roman[s[i]];
            }
        }
        return result;


       /* int num=0;
        for(int i=0;i<s.size();i++){
           if(s[i]=='M'){
             num+=1000;
           }else if(s[i]=='D' && i+1<=s.size() && s[i+1]!='M'){
            num+=500;
           }else if(s[i]=='D' && i+1<=s.size() && s[i+1]=='M'){
            num-=500;
           }else if(s[i]=='C' && i+1<=s.size() && s[i+1]!={'M','D'}){
            num+=100;
           }else if(s[i]=='C' && i+1<=s.size() && s[i+1]=={'M','D'}
            num-=100;
           }else if(s[i]=='L' && i+1<=s.size() && s[i+1]!={'M','D','C'}){
            num+=50;
           }else if(s[i]=='L' && i+1<=s.size() && s[i+1]=={'M','D','C'}){
            num-=50;
           }else if(s[i]=='X' && i+1<=s.size() && s[i+1]!={'M','D','C','L'}){
            num+=10;
           }else if(s[i]=='X' && i+1<=s.size() && s[i+1]=={'M','D','C','L'}){
            num-=10;
           }else if(s[i]=='V' && i+1<=s.size() && s[i+1]!={'M','D','C','L','X'}){
            num+=5;
           }else if(s[i]=='V' && i+1<=s.size() && s[i+1]=={'M','D','C','L','X'}){
            num-=5;
           }else if(s[i]=='I' && i+1<=s.size() && s[i+1]!={'M','D','C','L','X','V'}){
            num+=1;
           }else if(s[i]=='I' && i+1<=s.size() && s[i+1]=={'M','D','C','L','X'}]){
            num-=1;
           }else{num+=0;}
        }
        return num;*/
    }
};