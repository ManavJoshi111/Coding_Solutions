class Solution {
public:
    void solve(vector<int> &arr,int target,int ind,vector<int> &ds,vector<vector<int>> &ans)
    {
        if(ind==arr.size())
        {
            // cout<<"here : "<<endl;
            // for(auto it:ds)
            // {
            //     cout<<it<<" ";
            // }
            // cout<<endl;
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(target>=arr[ind])
        {
            ds.push_back(arr[ind]);
            solve(arr,target-arr[ind],ind,ds,ans);
            ds.pop_back();
        }
        solve(arr,target,ind+1,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int ind=0;
        solve(candidates,target,ind,ds,ans);
        return ans;
    }
};