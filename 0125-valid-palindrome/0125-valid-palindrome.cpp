class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length(),sag=n-1;
        bool sonuc=false;
        for(int sol=0;sol<sag;){
            if (!isalnum(s[sol])) {
                sol++;
                continue;
            }
            if (!isalnum(s[sag])) {
                sag--;
                continue;
            }
            if (tolower(s[sol]) != tolower(s[sag])) {
                return false;
            }
            sol++;
            sag--;
        }
        return true;
    }
};