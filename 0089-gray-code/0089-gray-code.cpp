class Solution {
public:
    vector<int> grayCode(int n) {
        int k=0,a=pow(2,n)-1;
        vector<int>arr;
        for(int i=0;i<a+1;i++){
            k=i^(i>>1);
            arr.push_back(k);
        }
        return arr;
        //bu sorular mantık devreleri için çok önemli
    }
};