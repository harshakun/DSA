class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int c =0;
        int ans =0;
        int i =0, j=0;
        while(i<n)
        {
            if(answerKey[i]=='F') c++;
            if(c>k)
            {
                if(answerKey[j]=='F') c--;
                j++;
            }
            ans = max(ans, i-j+1);
            i++;
        } i=0;c=0;j=0;
         while(i<n)
        {
            if(answerKey[i]=='T') c++;
            if(c>k)
            {
                if(answerKey[j]=='T') c--;
                j++;
            }
            ans = max(ans, i-j+1);
            i++;
        }
        return ans;
    }
};