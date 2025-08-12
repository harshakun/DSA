class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> temp(n,0);
        int i =0,j=0,ck=0,ans=0;
        while (j<n)
        {
            
            if(nums[j]==0)
            {
                if(ck<k)
                {
                    ck++;
                    temp[j]=1;
                    
                }else 
                {
                    if(k!=0){while(ck==k )
                    {
                        if(temp[i]==1)
                        {
                            ck--;
                        }
                        i++;
                    }ck++;
                    temp[j]=1;}
                    else{
                        i=j+1;
                    }
                    

                }
            }
            ans = max(ans, j-i+1);
            
            j++;

        }
        return ans;

    }
};