class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(),hacim=0,sag=n-1;
        int yeni_hacim=0;
        for(int sol=0;sol<sag;){
            yeni_hacim=min(height[sol],height[sag])*(sag-sol);
            if(hacim<yeni_hacim)hacim=yeni_hacim;
            if(height[sol]<=height[sag])sol++;
            else{sag--;}
        }
        return hacim;
    }
};