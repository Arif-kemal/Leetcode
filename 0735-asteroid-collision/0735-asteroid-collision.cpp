class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size(),toplam;
        stack<int>stack;
        stack.push(asteroids[0]);
        bool hayatta;
        for(int i=1;i<n;i++){
            if(asteroids[i]>0){
                stack.push(asteroids[i]);
                continue;
            }
            hayatta=true;
            toplam=0;
            while(!(stack.empty())&&stack.top()>0&&asteroids[i]<0){
                toplam=stack.top()+asteroids[i];
                if (toplam>0){
                    hayatta=false;
                    break;
                }else if(toplam<0){
                    stack.pop();
                    hayatta=true;
                }else{
                    stack.pop();
                    hayatta=false;
                    break;
                }
            }
            if(hayatta){
                stack.push(asteroids[i]);
            }
        }
        int k=stack.size();
        vector<int>arif(k);
        if(k==0)return arif;
        for(int i=k-1;i>=0;i--){
            arif[i]=stack.top();
            stack.pop();
        }
        return arif;
    }
};