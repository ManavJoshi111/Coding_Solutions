class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        if(n>m)return false;
        vector<int> per(26,0);
        for(char c:s1)
            per[c-'a']++;
        vector<int> check(26,0);
        for(int i=0;i<n;i++)
            check[s2[i]-'a']++;
        if(per==check)return true;
        for(int i=n;i<m;i++)
        {
            cout<<"In for"<<endl;
            check[s2[i-n]-'a']--;
            check[s2[i]-'a']++;
            if(per==check)return true;
        }
        return false;
    }
};