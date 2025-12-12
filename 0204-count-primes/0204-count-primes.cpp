class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)return 0;
        vector<bool>arr(n,true);

        for(int i=0;i<n;i++){
            arr[i]=true;
        }

        for(int i=2;i*i<=n;i++){
            if(arr[i]){
                for(int j=i;j*i<n;j++){
                    arr[i*j]=false;
                }
            }
        }
        int k=0;
        for(int i=2;i<n;i++){
            if(arr[i])k++;
        }
        return k;
    }
};