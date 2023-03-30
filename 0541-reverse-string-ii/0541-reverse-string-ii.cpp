class Solution {
public:
    string reverseStr(string s, int k) {
        int p=0;
        if(k>=s.size())
        {
            reverse(s.begin(),s.end());
            return s;
        }
        while(p<s.size()-1)
        {
            if(k+p<s.size())
            {
                reverse(s.begin()+p,s.begin()+k+p);
            }
            else
            {
                reverse(s.begin()+p,s.end());
                break;
            }
            p+=(2*k);
        }
        return s;
    }
};