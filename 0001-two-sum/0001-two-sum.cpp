class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> indices;
        for(int i=0; i<n; i++){
            for(int j=i; j<n-1; j++){
                if (nums[i]+nums[j+1] == target){
                    indices.push_back(i);
                    indices.push_back(j+1);
                    break;
                }
            }
        }
        return indices;
    }
};