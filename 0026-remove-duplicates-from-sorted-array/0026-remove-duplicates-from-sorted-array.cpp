class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        while(j<nums.size())
        {
            if(nums[i]!=nums[j])
            {
                nums[++i]=nums[j++];
            }
            else
                j++;
        }
        return i+1;
    }
};