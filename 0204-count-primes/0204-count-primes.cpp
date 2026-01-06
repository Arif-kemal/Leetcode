class Solution {
public:
    int countPrimes(int n) {
        /*bu soruda bizden 1 den n'e kadar olan asal sayilarin adetini istiyor
        zor gibi gozuksede gayet basit Run time eror almak en buyuk sorun ama
        kurdugum algoritma bunu asiyor*/
        if(n<=2)return 0;
        vector<bool>arr(n,true);//vector olusturuyor ve hepsini true diyoruz
        for(int i=0;i<n;i++){
            arr[i]=true;
        }
        for(int i=2;i*i<=n;i++){
            if(arr[i]){for(int j=i;j*i<n;j++){arr[i*j]=false;}}
        }
        int k=0;
        for(int i=2;i<n;i++){
            if(arr[i])k++;
        }
        return k;
    }
};