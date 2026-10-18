class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size(),toplam=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sayac=0;
                for(int k=0;k<n;k++){
                    if(grid[i][k]==grid[k][j]){
                        sayac++;

                    }
                }
                if(sayac==n){toplam++;}
            }
        }
        return toplam;
    }
};