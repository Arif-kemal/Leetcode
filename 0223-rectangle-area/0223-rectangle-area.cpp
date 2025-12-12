class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int alan1=0,alan2=0,alan3=0;
        alan1=abs((ax1-ax2)*(ay1-ay2));
        alan2=abs((bx1-bx2)*(by1-by2));

        int sol=max(ax1,bx1);
        int alt=max(ay1,by1);
        int sag=min(ax2,bx2);
        int ust=min(ay2,by2);

        if(sag>sol && ust>alt){
            alan3=(sag-sol)*(ust-alt);
        }
        
        return alan1+alan2-alan3;
    }
};