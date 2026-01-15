class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int k=0,a=target.size();
        for(int i=1;i<=n&&k<a;i++){
            ans.push_back("Push");
            if(i!=target[k])ans.push_back("Pop");
            if(target[k]==i)k++;
        }
        return ans;
    }
};