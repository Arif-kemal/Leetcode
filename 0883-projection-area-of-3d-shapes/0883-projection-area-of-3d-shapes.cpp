class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int toplamAlan=0;
        for(int i=0;i<n;i++){
            int sutun=0,satir=0;
            for(int j=0;j<n;j++){
                if(grid[i][j]>0){toplamAlan++;}
                sutun=max(sutun,grid[i][j]);
                satir=max(satir,grid[j][i]);
            }
            toplamAlan+=sutun+satir;
        }
        return  toplamAlan;
    }
};