class Solution {
    public boolean areSimilar(int[][] mat, int k) {
        int a=mat.length;
        int b=mat[0].length;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(i%2==1){
                    if(mat[i][(j+k)%b]==mat[i][j])continue;
                    return false;
                }
                else{
                    if(mat[i][((j-k)%b+b)%b]==mat[i][j])continue;
                    return false;
                }
            }
        }
        return true;
    }
}