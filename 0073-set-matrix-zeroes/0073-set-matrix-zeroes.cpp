class Solution {
public:
    void setZero(vector<vector<int>> &matrix,int n,int m,int row,int column)
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][column]=0;
        }
        for(int i=0;i<m;i++)
        {
            matrix[row][i]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> mp;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<"i : "<<i<<" "<<j<<endl;
                cout<<"Here : "<<matrix[i][j]<<endl;
                if(matrix[i][j]==0){
                    mp.push_back({i,j});
                    cout<<"In if : "<<i<<" "<<j<<endl;
                }
            }
        }
        cout<<"SIze : "<<mp.size()<<endl;
        for(auto it:mp)
        {
            cout<<"it : "<<it.first<<" "<<it.second<<endl;
            setZero(matrix, n, m,it.first,it.second);
        }
    }
};