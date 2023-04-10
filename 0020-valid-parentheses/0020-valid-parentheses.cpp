class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto ch:s)
        {
            if(ch=='(' or ch=='{' or ch=='[')
                st.push(ch);
            else
            {
                if(st.empty())
                {
                    return false;
                }
                if(ch==')' and st.top()=='(')
                    st.pop();
                else if(ch=='}' and st.top()=='{')
                    st.pop();
                else if(ch==']' and st.top()=='[')
                    st.pop();
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};