class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;
        for(auto it:nums)
        {
            if(it==0)return 0;
            if(it<0)neg++;
        }
        if(neg%2)return -1;
        return 1;
    }
};