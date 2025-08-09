class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0;
        if(n<1) return false;
        while(n>0)
        {
            if(n&1==1) {c++;
            if(c==2) return false;}
            n=n>>1;
        }
        return true;
        
    }
};