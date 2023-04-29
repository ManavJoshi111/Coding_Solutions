class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gg=g.size();
        int ss=s.size();
        int ans=0;
        int i=0,j=0;
        while(i<gg and j<ss)
        {
            if(g[i]<=s[j])
            {
                ans++;
                i++;
                j++;
            }
            else
            {
                while(j<ss and s[j]<g[i])j++;
            }
        }
        return ans;
    }
};