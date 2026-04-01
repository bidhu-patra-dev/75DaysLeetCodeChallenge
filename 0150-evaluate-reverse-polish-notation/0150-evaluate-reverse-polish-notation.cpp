class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;
        int calc;

        for (auto c : tokens) {
            if (c != "+" && c != "-" && c != "*" && c != "/") {
                st.push_back(stoi(c));
            }
            else {
                int b = st.back(); st.pop_back();
                int a = st.back(); st.pop_back();

                if (c == "+") calc = a + b;
                if (c == "-") calc = a - b;
                if (c == "*") calc = a * b;
                if (c == "/") calc = a / b;

                st.push_back(calc);
            }
        }

        return st.back();
    }
};