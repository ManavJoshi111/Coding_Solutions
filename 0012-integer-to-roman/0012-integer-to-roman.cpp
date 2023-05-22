class Solution {
public:
    string intToRoman(int num) {
        string s;
        int ans=0,p=12,div;
        map<int,string> romans={
            {1,"I"},
            {4,"IV"},
            {5,"V"},
            {9,"IX"},
            {10,"X"},
            {40,"XL"},
            {50,"L"},
            {90,"XC"},
            {100,"C"},
            {400,"CD"},
            {500,"D"},
            {900,"CM"},
            {1000,"M"}
        };
            for(auto it=romans.rbegin();it!=romans.rend();it++)
            {
                while(num>=it->first)
                {
                    num-=it->first;
                    s+=it->second;
                }
            }
        return s;
        
        
    }
};