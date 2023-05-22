class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it:nums)
            mp[it]++;
        priority_queue<pair<int,int>> pq;
        vector<int> res;
        for(auto it:mp)
        {
            pq.push(make_pair(it.second,it.first));
            if(pq.size()>mp.size()-k)
            {
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};