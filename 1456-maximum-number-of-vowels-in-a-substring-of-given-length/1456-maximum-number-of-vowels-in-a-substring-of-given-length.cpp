class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length(),toplam=0;
        char arif='.';
        cout << n;
        for(int i=0;i<k;i++){
           arif=s[i];
           if(arif=='a'||arif=='e'||arif=='i'||arif=='o'||arif=='u'){
            toplam++;
           }
        }
        if(k == n) return toplam;
        int maxt=toplam;
        for(int i=1;i<=n-k;i++){
            arif=s[i-1];
            if(arif=='a'||arif=='e'||arif=='i'||arif=='o'||arif=='u'){
            toplam--;
            }
            arif=s[i+k-1];
            if(arif=='a'||arif=='e'||arif=='i'||arif=='o'||arif=='u'){
            toplam++;
            }
            cout << "selam";
            maxt=max(toplam,maxt);
        }
        return maxt;
    }
};