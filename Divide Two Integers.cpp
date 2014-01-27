//============================================================================
// Divide two integers without using multiplication, division and mod operator.
//
// Complexity:
// O(1) time
//============================================================================

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==0 || divisor==0) return 0;
        int m=0; int res=0;
        bool positive=true;
        if((dividend<0&&divisor>0)||(dividend>0&&divisor<0)) positive=false;
        long long d=dividend; long long s=divisor;
        d=abs(d); s=abs(s);
        while((s<<m) <= d) m++;
        m--;
        for(int i=m;i>=0;i--) {
            if((s<<i)<=d) {
                d-=s<<i;
                res+=1<<i;
            }
        }
        if(!positive) return -res;
        else return res;
    }
};