class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums)
            mp[it]++;
        int i=0;
        for(auto it:mp)
        {
            // cout<<"it : "<<it.first<<endl;/
            nums[i]=it.first;
            i++;
        }
        return i;
    }
};