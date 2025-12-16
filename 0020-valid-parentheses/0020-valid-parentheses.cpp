class Solution {
public:
    bool isValid(string s) {
     //stack oogrenmek icin tekrar tekrar coz
     //soları başlıyoruz ve kapatanı geliyor mu bakıcaz
     stack<char>st;

     unordered_map<char,char> map={
        {')','('},
        {']','['},
        {'}','{'}
     };

     for(char c:s){
        if(map.count(c)){

            if(st.empty()){
                return false;
            }

            if(st.top()!=map[c]){
                return false;
            }
            st.pop();
        }else{
            st.push(c);
        }
     }
     return st.empty();
    }
};
