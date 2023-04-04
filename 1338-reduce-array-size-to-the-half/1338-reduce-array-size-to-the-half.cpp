class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int len=arr.size();
        int req=len/2;
        map<int,int> mp;
        for(int i:arr)
            mp[i]++;
        vector<int> freq;
        for(auto it:mp)
            freq.push_back(it.second);
        sort(freq.rbegin(),freq.rend());
        int i;
        for(i=0;i<freq.size();i++)
        {
            req-=freq[i];
            if(req<=0)return i+1;
        }
        if(req<=0)return i+1;
        return -1;
    }
};