class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> newarrs;
        for (int i : nums) {
            newarrs.push_back(i * i);
        }
        sort(newarrs.begin(), newarrs.end());
        return newarrs;
    }
};