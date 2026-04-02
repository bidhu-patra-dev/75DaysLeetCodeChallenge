class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> ans(temperatures.size(), 0);
        for (int i = temperatures.size() - 2; i >= 0; i--){
            int j = i+1;
            while (j < temperatures.size()){
                if (temperatures[j] > temperatures[i]){
                    ans[i] = j - i;
                    break;
                }
                else if (ans[j] == 0){
                    ans[i] = 0;
                    break;
                }
                else 
                    j += ans[j];
            }
        }
        
        return ans;
    }
};