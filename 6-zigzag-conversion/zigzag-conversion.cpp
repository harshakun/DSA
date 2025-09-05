class Solution {
public:
    string convert(string s, int k) {
          if (k == 1 || k >= s.length()) return s;
        vector<string> st(k,"");
        
        bool down = true;
        int n = s.size();
        int j =0;
        for(int i =0;i<n;i++)
        {
            if(down)
            {
                st[j] = st[j]+s[i];
                if(j==k-1) {
                    down = false;
                    j--;
                }
                else j++;
            }
            else{
                st[j]=st[j]+s[i];
                if(j==0)
                {
                    down = true;
                    j++;
                }else j--;
            }

        }
        string ans;
        for(int i =0;i<k;i++)
        {
            ans = ans + st[i];
        }
        return ans;
    }
};