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
bool check(TreeNode* root, int sum)
{       
        if (root->left == nullptr && root->right == nullptr) {
            return (sum == root->val);
        }
        bool a =hasPathSum(root->left,sum-root->val);
        bool b = hasPathSum(root->right,sum-root->val);
        return a||b;
  
}
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==nullptr)return false;
        return check(root,sum);
        
    }
};