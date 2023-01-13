class Solution {
public:
    int countDigits(int num) {
        int onum=num;
        map<int,int> mp;
        int ans=0;
        while(num)
        {
            int rem=num%10;
            num/=10;
            mp[rem]++;
        }
        for(auto it:mp)
        {
            if((onum%(it.first))==0)
                ans+=it.second;
        }
        return ans;
    }
};