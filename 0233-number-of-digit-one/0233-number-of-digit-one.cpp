class Solution {
public:
    int countDigitOne(int n) {
        long long toplam=0;
        long long arif=1;

        while(arif<=n){
            long long sol=n/(arif*10);
            int suan=(n/arif)%10;
            long long sag=n%arif;

            if(suan==0){
                toplam+=(sol*arif);
            }else if(suan==1){
                toplam+=(sol*arif)+(sag+1);
            }else{
                toplam+=(sol+1)*arif;
            }

            arif*=10;
        }
        return toplam;
    }
};