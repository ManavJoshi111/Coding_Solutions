class Solution {
public:
    bool isItPossible(string word1, string word2) {
        map<char,int> mp1,mp2;
        for(auto it:word1)
            mp1[it]++;
        for(auto it:word2)
            mp2[it]++;
        for(char c1='a';c1<='z';c1++)
        {
            for(char c2='a';c2<='z';c2++)
            {
                if(mp1.count(c1)==0 or mp2.count(c2)==0) continue;
                mp1[c1]--;
                if(mp1[c1]==0)mp1.erase(c1);
                mp1[c2]++;
                mp2[c2]--;
                if(mp2[c2]==0)mp2.erase(c2);
                mp2[c1]++;
                if(mp1.size()==mp2.size())return true;
                mp1[c1]++;
                mp2[c2]++;
                mp1[c2]--;
                if(mp1[c2]==0)mp1.erase(c2);
                mp2[c1]--;
                if(mp2[c1]==0)mp2.erase(c1);
            }
        }
        return false;
    }
};