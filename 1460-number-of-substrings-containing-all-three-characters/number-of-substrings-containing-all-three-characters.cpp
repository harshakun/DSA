class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> temp (3,-1);
        int n = s.size();
        int c=0;
        for(int i =0;i<n;i++)
        {
            temp[s[i]-'a']=i;

            c = c+min(min(temp[0],temp[1]),temp[2]) +1;

        }
        return c;
    }
};