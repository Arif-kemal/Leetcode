class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int ax=max(x1,min(xCenter,x2));
        int ay=max(y1,min(yCenter,y2));
        int dx=xCenter-ax;
        int dy=yCenter-ay;
        return (dx * dx + dy * dy)<=(radius * radius);
    }
};