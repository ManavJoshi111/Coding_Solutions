bool cmp(vector<int> &a,vector<int> &b){return a[1]<b[1];}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
        int ans=0;
        sort(intervals.begin(),intervals.end(),cmp);
        int arrow=0;
        for(int i=0;i<intervals.size();i++)
        {
            if(ans==0 or intervals[i][0]>arrow)
                ans++,arrow=intervals[i][1];   
        }
        return ans;
    }
};