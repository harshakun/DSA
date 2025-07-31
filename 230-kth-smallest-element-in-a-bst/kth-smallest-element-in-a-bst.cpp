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
int  c =0,result = -1;
    void solve(TreeNode* root, int k)
    {if(root==nullptr) return;
        solve(root->left,k);
        c++;
        if(c==k) result=root->val;
        solve(root->right,k);

    }
    int kthSmallest(TreeNode* root, int k) {
        solve(root,k);
        return result;
    }
};