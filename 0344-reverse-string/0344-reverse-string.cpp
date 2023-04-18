class Solution {
public:
    void solve(int ind,int size,vector<char> &s)
    {
        if(ind==size/2)return;
        swap(s[ind],s[size-ind-1]);
        solve(ind+1,size,s);
    }
    void reverseString(vector<char>& s) {
        int size=s.size();
        solve(0,size,s);
    }
};