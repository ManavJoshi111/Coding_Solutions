class Solution {
public:
    bool dfs(int i,vector<int> &visited,int end, vector<int> adj[])
    {
        visited[i]=1;
        for(int it:adj[i])
        {
            if(i==end)return true;
            if(!visited[it])
            {
                if(dfs(it,visited,end,adj))return true;    
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(n==1)return 1;
        vector<int> visited(n,0);
        vector<int> adj[n];
        for(auto it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        return dfs(source,visited,destination,adj);
    }
};