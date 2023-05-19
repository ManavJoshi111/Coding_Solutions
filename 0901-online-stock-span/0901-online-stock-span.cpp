class StockSpanner {
public:
    vector<int> stocks;
    StockSpanner() {
        
    }
    
    int next(int price) {
        stocks.push_back(price);
        if(stocks.size()==1)return 1;
        int count=0,i=stocks.size()-1;
        while(i>=0 and stocks[i--]<=price)
            count++;
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */