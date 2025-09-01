class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();
        for(int i =0;i<n; i++)
        {
            string ch = tokens[i];
            if(ch == "+"||ch == "-" || ch == "*" || ch =="/")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(ch=="+")
                {
                    st.push(a+b);
                }
                else if(ch=="-")
                {
                    st.push(b-a);
                }
                else if(ch=="*")
                {
                    st.push(a*b);
                }
                else if(ch=="/")
                {
                    st.push(b/a);
                }
            }
            else 
            {
                int x = stoi(ch);
                st.push(x);
            }
        }
        return st.top();
    }
};