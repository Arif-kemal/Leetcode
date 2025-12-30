class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> map;
        int max_len=0,left=0;
        for(int i=0;i<fruits.size();i++){
            map[fruits[i]]++;
            while(map.size()>2){
                map[fruits[left]]--;
                if(map[fruits[left]]==0){
                    map.erase(fruits[left]);
                }
                left++;
            }
            max_len=max(max_len,i-left+1);
        }
        return max_len;
    }
};