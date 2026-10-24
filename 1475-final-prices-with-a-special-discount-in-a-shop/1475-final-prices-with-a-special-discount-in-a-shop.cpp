class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>arif=prices;
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&prices[st.top()]>=prices[i]){
                int j=st.top();
                st.pop();
                arif[j]=prices[j]-prices[i];
            }
            st.push(i);
        }
        return arif;
    }
};