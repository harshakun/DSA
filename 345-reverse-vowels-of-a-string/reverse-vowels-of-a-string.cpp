class Solution {
public:
    int findl(int i,int n,string s)
    {
        while(i<n)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') break;
            i++;
        }

        return i;
    }
    int findr(int j ,string s)
    {
        while(j>=0)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U') break;
            j--;
        }
        return j;
    }
    string reverseVowels(string s) {
        int n = s.size();
        int i=findl(0,n,s),
            j=findr(n-1,s);
        
        
        
        while(i<j)
        {
            swap(s[i],s[j]);
            i=findl(i+1,n,s);
            j=findr(j-1,s);
        }
        return s;
    }
};