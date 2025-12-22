class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
      vector<int>basarili;
      int m=spells.size();
      int n=potions.size();
      sort(potions.begin(),potions.end());

      for(int i=0;i<m;i++){
        int left=0,right=n-1,idx=n;

        while(left<=right){
            int mid=left+(right-left)/2;
            long long power=(long long)potions[mid]*spells[i];

            if(power>=success){
                idx=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        basarili.push_back(n-idx);
      }
      return basarili;
    }
};