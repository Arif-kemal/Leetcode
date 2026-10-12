class Solution {
public:
    bool judgeSquareSum(int c){
        long long n=sqrt(c);
        long long toplam=0,sol=0,sag=n;
        while(sol<=sag){
            toplam=(sol*sol)+(sag*sag);
            if(toplam==c){
                return 1;
            }else if(toplam>c){
                sag--;
            }else{
                sol++;
            }
        }
        return 0;
    }
};