class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character , Integer> mp = new HashMap<>();
        int n = s.length();
        int m = t.length();
        if(n!=m) return false;
        for(int i =0;i<n;i++)
        { char ch = s.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }
        for(int i =0;i<m;i++)
        {    char ch = t.charAt(i);
            if(mp.containsKey(ch)){
            if(mp.get(ch)==0) return false;
            mp.put(ch,mp.getOrDefault(ch,0)-1);

        }
        else return false;
        }
        return true;
    }
}