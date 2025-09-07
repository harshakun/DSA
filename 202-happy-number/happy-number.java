class Solution {
    public boolean isHappy(int n) {
     HashSet<Integer> s = new HashSet<>();
     s.add(n);
    //  int sum=0;
        while(n!=1)
        {
            int sum=0;
            
            while(n!=0)
            {
                int t=n%10;
                sum +=(t*t);
                n=n/10;
            }
            if(s.contains(sum)) return false;
            else s.add(sum);
            n=sum;
        }
        return true;
    }
}