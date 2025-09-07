class Solution {
    public boolean isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        int n1=x;
        int n =0;
        while(x!=0)
        {
            int temp = x%10;
            n=(n*10) + temp;
            x=x/10;
        }
        if(n==n1) return true;
        else return false;
    }
}