class Solution {
public:
    int reverseDegree(string s) {
        int toplam=0;
        for(int i=0;i<s.length();i++){
            toplam+=('z'-s[i]+1)*(i+1);
        }
        return toplam;
    }
};