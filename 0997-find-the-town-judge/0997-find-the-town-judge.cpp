class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> Indeg(n+1, 0);
        vector<int> Outdeg(n+1, 0);
        for (int i = 0; i < trust.size(); i++) {
            int first = trust[i][0];
            int second = trust[i][1];
            Outdeg[first]++;
            Indeg[second]++;
        }
        for (int i = 1; i <= n; i++) {
            if (Indeg[i] == n - 1 && Outdeg[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};