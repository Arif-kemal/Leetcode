class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>arr;
        if(x<10 && x>=0){
            return 1;
        }else if(x%10==0 || x<0){return 0;}
       int y=x,i=0;
        while(y!=0){
            y=y/10;
            i++;
        }
        for(int k=0;k<i;k++){
            int m=0;
            m=x%10;
            x=x/10;
           arr.push_back(m);
        }

        for(int a=0;a<arr.size();a++){
            if(arr[a]!=arr[arr.size()-1-a]){return 0;}
        }
      return 1;
    }
};