class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int total_time=0,n=points.size(),dx=0,dy=0;
        for(int i=1;i<n;i++){
             dx=abs(points[i][0]-points[i-1][0]);
             dy=abs(points[i][1]-points[i-1][1]);
            total_time+=max(dx,dy);
        }
        return total_time;
    }
};