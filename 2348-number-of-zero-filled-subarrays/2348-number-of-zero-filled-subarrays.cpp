class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        long long count;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            if(nums[i]==0)
            {
                while(i<nums.size() and nums[i]==0)
                {
                    i++;
                    count++;
                }
            }
            
            ans+=(count*(count+1))/2;
        }
        return ans;
    }
};