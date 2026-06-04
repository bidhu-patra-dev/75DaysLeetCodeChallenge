class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1 = 0, prev2 = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            int take = prev2 + nums[i], skip = prev1, curr = max(take, skip);
             prev2 = prev1;
             prev1= curr ;
        }
        return prev1;
    }
};