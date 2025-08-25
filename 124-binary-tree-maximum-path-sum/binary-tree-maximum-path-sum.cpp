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
    int ans = INT_MIN;
    int solve(TreeNode* root)
    {
        if(root==nullptr) return 0;
        int lh = max(solve(root->left),0);
        int rh = max(solve(root->right),0);
        ans = max(ans , lh+rh+root->val);
        return max(lh,rh)+root->val;

    }
    int maxPathSum(TreeNode* root) {
     solve(root);
     return ans;   
    }
};