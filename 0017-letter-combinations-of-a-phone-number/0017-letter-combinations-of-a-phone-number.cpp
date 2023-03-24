class Solution {
public:
    vector<string> letters = {
    "", "", "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"
    };
    void helper(vector<string> &res,string &digits,string ans,int ind)
    {
        if(ind==digits.size())return;
        for(int i=0;i<letters[digits[ind]-'0'].size();i++)
        {
            ans.push_back(letters[digits[ind]-'0'][i]);
            helper(res,digits,ans,ind+1);
            if(ind==digits.size()-1)
            {
            res.push_back(ans);
            }
            ans.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)return {};
        vector<string> res;
        helper(res,digits,"",0);
        return res;
    }
};