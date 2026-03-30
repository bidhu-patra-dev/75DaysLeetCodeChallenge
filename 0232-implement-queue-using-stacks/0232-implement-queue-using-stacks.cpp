class MyQueue {
public:
    stack<int> s1; // will be used for push operations only
    stack<int> s2; // will be used for pop operations only
    MyQueue() {}

    void push(int x) { s1.push(x); }

    int pop() {
        if (empty()) {
            return 0;
        }

        else if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }

            int element = s2.top();
            s2.pop();
            return element;

        }

        else {
            int element = s2.top();
            s2.pop();
            return element;
        }
    }

    int peek() {

        if (empty()) {
            return 0;
        }

        else if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }

            return s2.top();
        }

        else {
            return s2.top();
        }
    }

    bool empty() { return s1.empty() && s2.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */