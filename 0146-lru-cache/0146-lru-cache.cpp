class LRUCache {
    private: 
    class node{
        public: 
        int key,val;
        node* next;
        node* prev;
        node(int key,int val)
        {
            this->key=key;
            this->val=val;
        }
    };
    public:
    node* head=new node(0,0);
    node* tail=new node(0,0);
    int cap;
    unordered_map<int,node*> mp;
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        head->prev=nullptr;
        tail->prev=head;
        tail->next=nullptr;
    }
    
    void addnode(node* toadd)
    {
        node* temp=head->next;
        head->next=toadd;
        toadd->prev=head;
        toadd->next=temp;
        temp->prev=toadd;
    }
    
    void deletenode(node* todel)
    {
        node* delprev=todel->prev;
        node* delnext=todel->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    
    int get(int _key) {
        if(mp.find(_key)==mp.end())return -1;
        int ans=mp[_key]->val;
        node* resnode=mp[_key];
        mp.erase(_key);
        deletenode(resnode);
        addnode(resnode);
        mp[_key]=head->next;
        return ans;
    }
    
    void put(int _key, int value) {
        if(mp.find(_key)!=mp.end())
        {
            deletenode(mp[_key]);
            mp.erase(_key);
        }
        if(mp.size()==cap)
        {
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(_key,value));
        mp[_key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */