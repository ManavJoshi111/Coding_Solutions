class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> q1,q2;
        for(int i=0;i<senate.size();i++)
        {
            (senate[i]=='R')?q1.push(i):q2.push(i);
        }
        while(!q1.empty() and !q2.empty())
        {
            int rind=q1.front(),dind=q2.front();
            q1.pop();
            q2.pop();
            if(rind<dind)
            {
                q1.push(rind+senate.size());
            }
            else q2.push(dind+senate.size());
        }
        return (q1.size()>q2.size())?"Radiant":"Dire";
    }
};