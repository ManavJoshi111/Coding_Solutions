class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 or j==0 or i==n-1 or j==m-1)
                {
                    if(grid[i][j]==1)
                    {
                        q.push({i,j});
                        visited[i][j]=1;
                    }
                }
            }
        }
        int delrow[]={0,-1,0,1};
        int delcol[]={-1,0,1,0};
        
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 and ncol>=0 and nrow<n and ncol<m and visited[nrow][ncol]==0 and
                grid[nrow][ncol]==1)
                {
                    q.push({nrow,ncol});
                    visited[nrow][ncol]=1;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 and visited[i][j]==0)cnt++;
            }
        }
        return cnt;
    }
};