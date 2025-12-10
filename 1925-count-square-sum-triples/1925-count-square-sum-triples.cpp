class Solution {
public:
    int countTriples(int n) {
        int kok=0,k=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                kok=i*i+j*j;
                if(sqrt(kok)==(int)sqrt(kok) && kok<=n*n){
                    k++;
                }
            }
        }
        return k;
    }
};