class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        stack<char> st;
        for(char c:s)
        {
            if(c=='(')
                st.push(c);
            else
            {
                if(!st.empty())
                    st.pop();
                else
                    ans++;
            }
        }
        return abs(ans)+st.size();
    }
};