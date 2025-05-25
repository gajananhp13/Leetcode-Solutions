class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if (x>0 && x<=3) return 1;   //square less than 4 are 1 itself

        for (int i=3;i<x/2+3; i++) {
            if (i>x/i) {
                return i-1;  // it will return the lower bound of the number always
                }
        }
        return -1;
    }
};