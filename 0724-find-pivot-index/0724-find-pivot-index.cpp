class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> v1(nums.size(),0),v2(nums.size(),0);
        int n=nums.size();
        v1[0]=nums[0];
        v2[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
            v1[i]=v1[i-1]+nums[i];
        for(int i=n-2;i>=0;i--)
            v2[i]=v2[i+1]+nums[i];
        for(int i=0;i<n;i++)
        {
            if(v1[i]==v2[i])return i;
        }
        return -1;
    }
};