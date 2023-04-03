class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0;
        int sum=0, n=people.size();
        int start=0,end=n-1;
        while(start<=end)
        {
            if(people[start]+people[end]<=limit)
            {
                ans++;start++;end--;
            }
            else 
            {
                ans++;
                end--;
            }
        }
        return ans;
    }
};