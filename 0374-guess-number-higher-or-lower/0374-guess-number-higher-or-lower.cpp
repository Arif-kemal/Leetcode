/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
 
class Solution {
public:
    int guessNumber(int n) {
        int result=2;
        unsigned int  num=0,sol=0,sag=n;
        while(sol<sag){
            num=(sol+ sag)/2;
            result=guess(num);
            if(result==1){
               sol=num+1;
            }else if(result==-1){
               sag=num-1;
            }else{
                sol = num;
                sag = num;
            }
        }
        return (int)sol;
    }
};