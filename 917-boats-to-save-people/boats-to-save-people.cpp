class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int i =0,j=n-1;
        int c =0
        ;
        while(i<=j)
        {   if(i==j) 
            {
                c++;
                break;
            }
            if(people[j]+people[i]>limit) 
            {c++;
            j--;}
            else 
            {
                c++;
                i++;
                j--;
            } 
        }
        
        return c;
    }
};