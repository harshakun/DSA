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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        if(!root) return res;
        q.push(root);
        while(!q.empty())
        {
            int s = q.size();
            for(int i =0;i<s;i++)
            {   TreeNode* node =q.front();
                q.pop();
                if(i==s-1) res.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
            }
        }
        return res;
    }
};