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
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode *curr = root;
        stack<TreeNode*> st;
        vector<int> preorder{};
        while(curr || !st.empty()) {  
            while(curr) {
                preorder.push_back(curr->val);
                st.push(curr);
                curr = curr->left;    
            }
            curr = st.top();
            curr = curr->right;
            st.pop();
        }
        return preorder;
    }
};