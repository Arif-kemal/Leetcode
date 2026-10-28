class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperaturas) {
        int n=temperaturas.size(),eski;
        vector<int>sonuc(n,0);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&temperaturas[st.top()]<temperaturas[i]){
                eski=st.top();
                sonuc[eski]=i-eski;
                st.pop();
            }
            st.push(i);
        }    
        return sonuc;
    }
};