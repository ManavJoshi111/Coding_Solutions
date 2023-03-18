class BrowserHistory {
public:
    vector<string> vec;
    int i=-1;
    BrowserHistory(string homepage) {
        vec.push_back(homepage);
        i++;
    }
    
    void visit(string url) {
        vec.erase(vec.begin()+i+1,vec.end());
        vec.push_back(url);
        i++;
    }
    /*
    leetcode
    google
    facebook
    youtube
    linkedin
    */
    string back(int steps) {
        i=max(0,i-steps);
        return vec[i];
    }
    
    string forward(int steps) {
        i=min(i+steps,(int)vec.size()-1);
        return vec[i];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */