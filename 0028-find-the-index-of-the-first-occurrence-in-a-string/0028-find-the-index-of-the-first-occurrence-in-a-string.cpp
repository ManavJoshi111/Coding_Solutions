class Solution {
public:
int strStr(string a, string b) {
        int j=0;
        int n = a.length();
        int m = b.length();
        int res=-1;
        if(m>n){
            return -1;
        }
        for(int k = 0; k<n; k++){
            if(a[k]==b[j]){
                j++;
                if(res==-1)res=k;
            }
            else if(j>0){
                j=0;
                k=res;
                res=-1;
            }
            if(j==m)break;
        }
        return (j==m)?res:-1;
    }
};