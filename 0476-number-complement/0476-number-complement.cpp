class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        int i=0;
        while(num)
        {
            int bit=!(num%2);
            ans=ans+(bit*pow(2,i++));
            num/=2;
        }
        return ans;
    }
};