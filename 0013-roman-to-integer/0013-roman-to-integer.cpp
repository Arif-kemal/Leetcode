class Solution {
public:
int degeral(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}
    int romanToInt(string s) {
        int toplam=0;
        for(int i=0;i<s.length();i++){
            int suan=degeral(s[i]);
            if(i+1<s.length() && suan<degeral(s[i+1])){
                toplam-=suan;
            }else{
                toplam+=suan;
            }
        }
        return toplam;
    }
};