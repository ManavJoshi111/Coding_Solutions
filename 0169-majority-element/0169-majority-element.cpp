class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums[0];
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ele)cnt++;
            else cnt--;
            if(cnt==0)ele=nums[i+1];
        }
        return ele;
    }   
};