class Solution {
public:
    int getSum(int a, int b) {
       while(b!=0){
        int eldesiz=a^b;
        int elde=(a&b)<<1;

        a=eldesiz;
        b=elde;
       } 
       return a;
    }
};