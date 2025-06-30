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
void in(vector<int> &res,TreeNode* root)
{ if (root==nullptr) return;
    in(res,root->left);
    res.emplace_back(root->val);
    in(res, root->right);
   
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        in(res,root);
        return res;
        
    }
};