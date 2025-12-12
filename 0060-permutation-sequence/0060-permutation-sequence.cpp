class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        int fact=1;
        for(int i=1;i<n;i++){
            fact*=i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        k--;//index için 1 azalttım

        string ans="";//geriye dönüş

        for(int i=n-1;i>=0;i--){
            int index=k/fact;

            ans+=to_string(numbers[index]);
            numbers.erase(numbers.begin()+index);

            k%=fact;

            if(i>0){fact/=i;}
        }
        return ans;
    }
};