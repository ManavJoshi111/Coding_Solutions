class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncrease=true,inDecrease=true;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
                isIncrease=false;
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
                inDecrease=false;
        }
        return (isIncrease or inDecrease);
    }
};