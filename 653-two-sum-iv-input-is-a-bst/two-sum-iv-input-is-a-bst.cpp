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
    set<int> st; bool ans = false;
    bool solve(TreeNode* root, int k)
    { if(root==nullptr) return false;
        if(st.find(root->val)==st.end())
        {
            if(st.find(k-root->val)!=st.end()) {
                // ans = true;
                return true;
            }
            else 
            st.insert(root->val);
        }
        return solve(root->left,k) || solve(root->right,k);
    }
    bool findTarget(TreeNode* root, int k) {
       return solve(root, k);
       
    }
};