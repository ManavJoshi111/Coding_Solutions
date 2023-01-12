class Solution {
public:
    vector<int> dfs(vector<vector<int>> &adj,int curr,string &label,vector<bool> &vis,vector<int> &ans)
    {
        vis[curr]=true;
        vector<int> v(26,0);
        v[label[curr]-'a']=1;
        for(int i=0;i<adj[curr].size();i++)
        {
            if(vis[adj[curr][i]])
                   continue;
            vector<int> r=dfs(adj,adj[curr][i],label,vis,ans);
            for(int i=0;i<26;i++)
                v[i]+=r[i];
        }
        ans[curr]=v[label[curr]-'a'];
        return v;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n+1,vector<int>());
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> ans(n,1);
        vector<bool> vis(n+1,0);
        dfs(adj,0,labels,vis,ans);
        return ans;
    }
};