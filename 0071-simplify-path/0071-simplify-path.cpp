class Solution {
public:
    string simplifyPath(string path) {
        string ans="/";
        vector<string> st;
        int i=1;
        while(i<path.size())
        {
             if(path[i] == '/')
             {
                 i++;
                continue;
             }
            string word="";
            while(i<path.size() and path[i]!='/')
            {
                word+=path[i++];
            }
            cout<<"WOrd : "<<word<<endl;
            if(word=="."){i++;continue;}
            else if(word==".."){if(st.size()!=0)st.pop_back();}
            else st.push_back(word);
            i++;
        }
        for(int i=0;i<st.size();i++)
        {
            if(st[i]!="")
            {
                ans+=st[i];
                if(i==st.size()-1)return ans;
                ans+='/';
            }
        }
        return ans;
    }
};