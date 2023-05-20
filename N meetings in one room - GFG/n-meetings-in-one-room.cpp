//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct meeting{
    int start;
    int end;
    int index;
};

bool comp(struct meeting m1,struct meeting m2)
{
    if(m1.end<m2.end)
        return true;
    else if(m1.end>m2.end)
        return false;
    else return m1.index<m2.index;
}
class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        struct meeting m[n];
        for(int i=0;i<n;i++)
        {
            m[i].start=start[i];
            m[i].end=end[i];
            m[i].index=i+1;
        }
        sort(m,m+n,comp);
        // for(auto it:m)
        // {
        //     cout<<"end : "<<it.end<<" ";
        // }
        // cout<<endl;
        int ans=1;
        int maxEnd=m[0].end;
        for(int i=1;i<n;i++)
        {
            if(m[i].start>maxEnd)
            {
                ans++;
                maxEnd=m[i].end;
            }
        }
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
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends