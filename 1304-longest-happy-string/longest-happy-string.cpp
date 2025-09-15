class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        if(a!=0) pq.push({a,'a'});
        if(b!=0) pq.push({b,'b'});
        if(c!=0) pq.push({c,'c'});
        string s ="";int count=0;char prev;
        priority_queue<pair<int,char>> temp;
        while(!pq.empty())
        {
            int num = pq.top().first;
            char ch =  pq.top().second;
            pq.pop();
            
                if(s=="")
                {   s=s+ch;
                    count++;
                    prev = ch;  
                    if(num!=1) pq.push({num-1,ch}); 
                }
                else if(ch == prev && count ==2)
                    {
                        temp.push({num,ch});
                         if(!pq.empty()){int num1 = pq.top().first;
                         char ch1 =  pq.top().second;
                         pq.pop();
                        s+=ch1;
                        prev = ch1;
                        count=1;
                        if(num1!=1) pq.push({num1-1,ch1});
                        pq.push(temp.top());
                        temp.pop();}
                        else break;
                    }
                    else
                    {
                        s=s+ch;
                        if(ch==prev) count++;
                        else {count =1;
                        prev = ch;}
                        if(num!=1) pq.push({num-1,ch});
                    }                    

        }
        return s;
    }
};