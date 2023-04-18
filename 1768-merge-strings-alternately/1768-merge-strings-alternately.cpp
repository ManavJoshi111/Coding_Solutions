class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int i=0;
        int p=0,q=0;
        while(p<word1.size() and q<word2.size())
        {
            if(q<word2.size() and i%2)
                ans+=word2[q++];
            else if(p<word1.size() and i%2==0)
                ans+=word1[p++];
            i++;
        }
        while(p<word1.size())ans+=word1[p++];
        while(q<word2.size())ans+=word2[q++];
        return ans;
    }
};