class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> phash(26,0);
        vector<int> win(26,0);
        vector<int> ans;
        int slen=s.size(),plen=p.size();
        if(slen<plen)return {};
        for(int i=0;i<plen;i++)
            phash[p[i]-'a']++,win[s[i]-'a']++;
        if(phash==win)ans.push_back(0);
        for(int i=plen;i<slen;i++)
        {
            win[s[i-plen]-'a']--;
            win[s[i]-'a']++;
            if(win==phash)ans.push_back(i-plen+1);
        }
        return ans;
    }
};