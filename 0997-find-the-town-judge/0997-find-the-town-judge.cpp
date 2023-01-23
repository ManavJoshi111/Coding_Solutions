class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> count(N+1);
        
        for(int i=0; i < trust.size(); i++)
        {
            count[trust[i][0]] = -1;
            count[trust[i][1]]++;
        }
            
        for (int i = 1; i <= N; ++i) {
            if (count[i] == N - 1)
                return i;
        }
        return -1;
    }
};