class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != j) {
                return j;
            }
        }
        return nums.size();
    }
};