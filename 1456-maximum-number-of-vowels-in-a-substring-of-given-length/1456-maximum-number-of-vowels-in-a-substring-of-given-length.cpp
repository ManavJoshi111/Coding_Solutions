class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<k;i++)
        {
            if(isVowel(s[i]))
                ans++;
        }
        
        int i=1,j=k;
        if(i==j)
        {
            for(auto it:s)
            {
                if(isVowel(it))return 1;
            }
            return 0;
        }
        int temp=ans;
        while(j<n)
        {
            if(isVowel(s[j]))temp++;
            if(isVowel(s[i-1]))temp--;
            i++;
            j++;
            ans=max(ans,temp);
            // cout<<"ans : "<<ans<<endl;
            // cout<<"j : "<<j<<endl;
        }
        return ans;
    }
};