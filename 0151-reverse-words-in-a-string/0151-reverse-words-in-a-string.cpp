class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int i=0;
        while(i<s.size())
        {
            string word="";
            while(i<s.size() and s[i]!=' ')
            {
                word+=s[i++];
            }
            if(word!="")
                st.push(word);
            i++;
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
            if(!st.empty())
                ans+=" ";
        }
        return ans;
    }
};