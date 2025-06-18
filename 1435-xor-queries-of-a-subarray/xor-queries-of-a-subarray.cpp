class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> pref;
        int p =0;
        for(int i =0;i<arr.size();i++)
        {
            p=p^arr[i];
            pref.push_back(p);

        }
        vector<int> ans;
        for(int i =0;i<queries.size();i++)
        {
            if(queries[i][0]==0) ans.push_back(pref[queries[i][1]]);
            else ans.push_back(pref[queries[i][1]]^pref[queries[i][0]-1]);
        }

     return ans;   
    }
};