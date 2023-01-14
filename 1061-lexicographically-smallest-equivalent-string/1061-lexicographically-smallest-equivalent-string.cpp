class Solution {
public:
    int parent[26];
    
    int findParent(int x){
        if(parent[x]==-1) return x;
        return parent[x]=findParent(parent[x]);
    }
    
    void unionCharacters(int x, int y) {
        x = findParent(x);
        y = findParent(y);
        
        if (x != y) 
            parent[max(x, y)] = min(x, y); // making the parent of larger character by ASCII as the smaller one
    }
	
    string smallestEquivalentString(string string1, string string2, string baseString) {
        
        memset(parent, -1, sizeof(parent));
        
        for (auto i = 0; i < string1.size(); ++i) 
            unionCharacters(string1[i] - 'a', string2[i] - 'a');
        
        for(auto i=0;i<baseString.size();i++) 
            baseString[i]=findParent(baseString[i]-'a')+'a';

        return baseString;
    }

};