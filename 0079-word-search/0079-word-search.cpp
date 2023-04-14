class Solution {
public:
    vector<int> drow={0,-1,0,+1};
    vector<int> dcol={-1,0,+1,0};
    int n,m;
    bool dfs(vector<vector<char>> &board,string &word,int row,int col,int ind,vector<vector<int>> &visited)
    {
        visited[row][col]=1;
        if(word.size()==ind)return true;
        for(int i=0;i<4;i++)
        {
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and board[nrow][ncol]==word[ind] and visited[nrow][ncol]==0)
            {
                if(dfs(board,word,nrow,ncol,ind+1,visited))return true;
            }
        }
        visited[row][col]=0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(dfs(board,word,i,j,1,visited))return true;
                }
            }
        }
        return false;
    }
};