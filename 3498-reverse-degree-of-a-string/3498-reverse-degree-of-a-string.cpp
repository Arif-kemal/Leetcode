class Solution {
public:
    int reverseDegree(string s) {
        int toplam=0,n=s.length();
        for(int i=0;i<n;i++){
            toplam+=('z'-s[i]+1)*(i+1);
        }
        return toplam;
    }
};