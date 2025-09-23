class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n =digits.size();
        if(digits[n-1]<9)
        {
            digits[n-1]++;
            return digits;
        }
        int carry = 1;
        n=n-1;
        while(carry && n>=0 )
        {
            if(digits[n]<9)
        {
            digits[n]++;
            return digits;
        }
        else 
        { 
            digits[n]=0;
            n--;
        }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};