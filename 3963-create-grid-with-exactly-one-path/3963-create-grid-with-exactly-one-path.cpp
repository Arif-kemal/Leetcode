class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> arif(m, string(n,'#'));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    arif[i][j]='.';
                }else if(j==n-1){
                    arif[i][j]='.';
                }
            }
        }
        return arif;
    }
};