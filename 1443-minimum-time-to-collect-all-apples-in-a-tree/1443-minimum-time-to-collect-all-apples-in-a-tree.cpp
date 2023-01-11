class Solution {
public:
    unordered_map<int,vector<int>> g;
    unordered_map<int,bool> visited;
    int traverse(int node,int cost,vector<bool> apple)
    {
        if(visited[node])
            return 0;
        visited[node]=true;
        int childcost=0;
        for(auto it:g[node])
        {
            childcost+=traverse(it,2,apple);
        }
        if(childcost==0 and apple[node]==false)
            return 0;
        return childcost+cost;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        for(auto it:edges)
        {
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);
        }
        return traverse(0,0,hasApple);
        
    }
};