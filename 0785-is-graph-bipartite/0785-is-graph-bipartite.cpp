class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> adj[n];
        for(int i=0;i<n;i++)
        {
            for(int it:graph[i])
            {
                adj[i].push_back(it);
            }
        }
        vector<int> visited(n,0);
        vector<int> colr(n,-1);
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {   
                queue<pair<int,int>> q;
            q.push({i,0});
            visited[i]=1;
            colr[i]=0;
            while(!q.empty())
            {
                int node=q.front().first;
                int col=q.front().second;
                q.pop();
                for(int it:adj[node])
                {
                    if(!visited[it])
                    {
                        visited[it]=1;
                        q.push({it,!col});
                        colr[it]=!col;
                    }
                    else if(colr[node]==colr[it])return false;
                }
            }
            }
        }
        
        return true;
    }
};