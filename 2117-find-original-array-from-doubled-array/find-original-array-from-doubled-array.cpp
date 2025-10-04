class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = *max_element(changed.begin(),changed.end());
        vector<int> fre(n+1,0);
        for(auto i : changed)
        {
            fre[i]++;
        }
        vector<int> ans;
        int x = fre[0];
        if(x%2!=0) return {};
        x=x/2;
        while(x--) ans.push_back(0);

        for(int i =1;i<n;i++)
        {
            if(fre[i]!=0)
            {   if(2*i>n) return {};
                int c = fre[i];
                int dc  = fre[2*i];
                if(c<=dc)
                {
                    while(c)
                    {
                        ans.push_back(i);
                        c--;
                    }
                    fre[2*i] = fre[2*i]-fre[i];
                }
                else return {};
            }
        }
        if(ans.size()*2 == changed.size()) return ans;
        return {};    
    }
};