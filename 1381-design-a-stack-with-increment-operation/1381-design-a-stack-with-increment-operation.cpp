class CustomStack {
public:
    vector<int> v;
    int k;
    CustomStack(int maxSize) {
        k=maxSize;
    }
    
    void push(int x) {
        cout<<"push"<<endl;
        if(v.size()==k)
            return;
        v.push_back(x);
    }
    
    int pop() {
        cout<<"pop"<<endl;
        if(v.size()==0)
            return -1;
        int temp=v[v.size()-1];
        v.pop_back();
        return temp;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k;i++)
        {
            cout<<"for"<<endl;
            if(i==v.size())return;
            // if(i>this->k-1)return;
            v[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */