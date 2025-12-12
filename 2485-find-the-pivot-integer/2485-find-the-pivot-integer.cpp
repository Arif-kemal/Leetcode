class Solution {
public:
    int toplam(int x){
        int sayi=x*(x+1)/2;
        return sayi;
    }
    int pivotInteger(int n) {
        int top=0;
        if(n<2){return 1;}
        if(n==3 || n==4){
            return -1;
        }
        for(int i=2;i<=n;i++){
            if(toplam(i-1)==toplam(n)-toplam(i)){
                return i;
            }
        }
        return -1;
    }
};