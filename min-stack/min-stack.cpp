class MinStack {
public:
    stack<int> s;
    multiset<int> m;
    
    void push(int val) {
        s.push(val);
        m.insert(val);
    }
    
    void pop() {
        m.erase(m.find(s.top()));
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return *m.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */