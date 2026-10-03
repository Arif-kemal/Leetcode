class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int left=0,write=0;
        while(left<n){
            int right=left;
            while(right<n&&chars[left]==chars[right]){
                right++;
            }
            chars[write++]=chars[left];
            int count=right-left;
            if(count>1){
                string str=to_string(count);
                for(char c:str){
                    chars[write++]=c;
                }
            }
            left=right;
        }
        return write;
    }
};