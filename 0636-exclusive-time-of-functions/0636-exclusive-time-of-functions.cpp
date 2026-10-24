class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int>sonuc(n,0);
        stack<int>st;
        int oncekiZaman=0;
        for(string log:logs){
            stringstream ss(log);
            string parca;

            getline(ss, parca, ':'); 
            int id = stoi(parca);

            getline(ss, parca, ':'); 
            string islem = parca;

            getline(ss, parca, ':'); 
            int zaman = stoi(parca);

            if(islem=="start"){
               if (!st.empty()) {
                    sonuc[st.top()]+=zaman-oncekiZaman;
                }
                st.push(id);
                oncekiZaman=zaman;
            }else{
                sonuc[st.top()] += zaman - oncekiZaman + 1;
                st.pop();
                oncekiZaman = zaman + 1;
            }
        }
        return sonuc;
    }
};