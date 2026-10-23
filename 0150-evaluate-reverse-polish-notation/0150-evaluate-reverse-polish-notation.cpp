class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        int toplam=0;
        stack<int>stack;
        string token;
        for(int i=0;i<n;i++){
            token=tokens[i];
            int sol=0,sag=0;
            if(token=="+"||token=="-"||token=="*"||token=="/"){
               if(token=="+"){
                sag=stack.top();
                stack.pop();
                sol=stack.top();
                stack.pop();
                stack.push(sol+sag);
               }else if(token=="-"){
                sag=stack.top();
                stack.pop();
                sol=stack.top();
                stack.pop();
                stack.push(sol-sag);
               }else if(token=="*"){
                sag=stack.top();
                stack.pop();
                sol=stack.top();
                stack.pop();
                stack.push(sol*sag);
               }else{
                sag=stack.top();
                stack.pop();
                sol=stack.top();
                stack.pop();
                stack.push(sol/sag);
               }
            }else{
              sol=stoi(token);
              stack.push(sol);
            }
        }
        return stack.top();
    }
};