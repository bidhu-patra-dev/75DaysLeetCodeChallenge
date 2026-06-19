class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        stack<int> st;
        int trapped_water = 0;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && height[i] > height[st.top()]) {
                int bottom = st.top();
                st.pop();
                if (st.empty())break;
                int left_boundary = st.top(), distance = i - left_boundary - 1, bounded_height = min(height[i], height[left_boundary]) - height[bottom];   
                trapped_water += distance * bounded_height;
            }
            st.push(i);
        }
        return trapped_water;
    }
};