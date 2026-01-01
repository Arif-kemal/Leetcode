class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        int k=0;
            if(digits[n]<9){
                digits[n]+=1;
                return digits;
            }else{
                while(n-k>=0 && digits[n-k]==9){
                    digits[n-k]=0;
                    if(n-k-1 >= 0 && digits[n-k-1]<9){
                      digits[n-k-1]+=1;
                      return digits;
                    }
                    k++;
                    if(n-k<0){
                        digits.insert(digits.begin() + 0,1);
                        return digits;
                    }
                }
            }
            return {};
    }
};