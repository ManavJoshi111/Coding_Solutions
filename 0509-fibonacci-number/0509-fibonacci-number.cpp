class Solution {
public:
    int fib(int n) {
        int prev2=0,prev=1;
        for(int i=0;i<n;i++)
        {
            int next=prev2+prev;
            prev2=prev;
            prev=next;
        }
        return prev2;
    }
};