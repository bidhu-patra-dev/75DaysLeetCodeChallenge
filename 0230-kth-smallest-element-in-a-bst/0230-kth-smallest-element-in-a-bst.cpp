/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void findKthSmallest(TreeNode* root, int& k, int& ans) {
        if (!root)
            return;
        findKthSmallest(root->left, k, ans);
        k--;
        if (k == 0) {
            ans = root->val;
            return;
        }

        findKthSmallest(root->right, k, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        findKthSmallest(root, k, ans);
        return ans;
    }
};