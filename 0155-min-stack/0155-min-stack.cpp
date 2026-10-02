class MinStack {
public:
  stack<int>st;
        stack<int>minst;
    MinStack() {//constriuctir empty anything declared insoide it is temp
    }

    
    void push(int value) {
        st.push(value);
        if(minst.empty()||minst.top()>=value)
        minst.push(value);
        
    }
    
    void pop() {
        if(st.top()==minst.top())
        {
            st.pop();
            minst.pop();
        }
        else
        st.pop();

        
    }
    
    int top() {
        //if(!st.empty())
        return st.top();
        
    }
    
    int getMin() {
      //  if(!minst.empty())
        return minst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */