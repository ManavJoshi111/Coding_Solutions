class RecentCounter {
public:
    vector<int> req;
    RecentCounter() {
    }
    
    int ping(int t) {
        int ans=0;
        req.push_back(t);
        for(int r:req)
        {
            if(r<=t and r>=(t-3000))ans++;
        }
        return ans;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */