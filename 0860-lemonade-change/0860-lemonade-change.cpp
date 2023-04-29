class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0,tens=0,tws=0;
        for(auto it:bills)
        {
            // cout<<"it : "<<it<<endl;
            if(it==5)fives++;
            if(it==10)
            {
                tens++;
                if(fives<1)return false;
                fives--;
            }
            if(it==20)
            {
                if(fives<1)return false;
                if(tens>0)
                {
                    tens--;
                    fives--;
                }
                else if(fives>=3)
                    fives-=3;
                else return false;
            }
        }
        return true;
    }
};