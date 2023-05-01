class Solution {
public:
    double average(vector<int>& salary) {
        double avg=0;
        int n=salary.size();
        sort(salary.begin(),salary.end());
        for(int i=1;i<n-1;i++)
        {
            avg+=salary[i];
        }
        return avg/(n-2);
    }
};