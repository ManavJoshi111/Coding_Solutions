class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums)
            mp[it]++;
        int i=0;
        for(auto it:mp)
        {
            if(it.second>=2)
            {
                nums[i]=it.first;
                nums[i+1]=it.first;
                i+=2;
            }
            else
                nums[i++]=it.first;
        }
        return i;
    }
};