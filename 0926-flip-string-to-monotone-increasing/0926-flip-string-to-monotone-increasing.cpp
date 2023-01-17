class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int co=0,cf=0;
        for (auto ch : s) {
            if (ch == '1') {
                ++co;
            } else {
                ++cf;
            }
            cf = std::min(co, cf);
        }
        return cf;
    }
};