//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    int drow[4]={1,0,0,-1};
    int dcol[4]={0,-1,1,0};
    string dir="DLRU";
    bool solve(vector<vector<int>> &m,int n,int row,int col,string str,vector<string> &ans,
    vector<vector<int>> &pathVisited)
    {
        if(row==n-1 and col==n-1)
        {
            ans.push_back(str);
            return true;
        }
        for(int i=0;i<4;i++)
        {
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<n and pathVisited[nrow][ncol]==0
            and m[nrow][ncol]!=0)
            {
                pathVisited[row][col]=1;
                solve(m,n,nrow,ncol,str+dir[i],ans,pathVisited);
                pathVisited[row][col]=0;
            }
        }
        return false;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<int>> pathVisited(n,vector<int>(n,0));
        vector<string> ans;
        string str="";
        if(m[0][0]==1)solve(m,n,0,0,str,ans,pathVisited);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends