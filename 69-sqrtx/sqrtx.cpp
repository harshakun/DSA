class Solution {
public:

    unsigned long long solve(unsigned long long i)
    {
        return i*i;
    }
    int mySqrt(int x) {
        int l =0;
        if(x==1) return 1;
        int h = x/2;
        unsigned long long  sol;
        while(l<=h)
        {unsigned long long mid = l+(h-l)/2;
        unsigned long long ans = solve(mid);
        if(ans == x) return mid;
        else if(ans <x) {
            sol = mid;
            l=mid+1;}
        else h = mid -1;
        }
        return sol;
    }
};