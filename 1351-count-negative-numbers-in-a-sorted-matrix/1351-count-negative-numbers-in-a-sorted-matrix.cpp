class Solution {
public://binary search kullanmaya çalış
    int countNegatives(vector<vector<int>>& grid) {
        int negatif=0,n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=grid[i].size()-1;j>=0;j--){
                if(grid[i][j]<0)negatif++;
                else{continue;}
            }
        }
        return negatif;
    }
};