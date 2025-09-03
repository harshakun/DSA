class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int ct=0, cf=0;
        int i=0,j=0;
        int ans =0;
        int n = answerKey.size();
        while(j<n)
        {
            if(answerKey[j]=='T') ct++;
            else cf++;

            while(cf>k && ct >k)
            {
                if(answerKey[i]=='T') ct--;
                else cf--;
                i++;
            }
            // int change = min(ct,cf);
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};