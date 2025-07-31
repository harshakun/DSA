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
    void solve(TreeNode* root, int k)
    { if(root==nullptr) return;
        if(st.find(root->val)==st.end())
        {
            if(st.find(k-root->val)!=st.end()) {
                ans = true;
                return;
            }
            else 
            st.insert(root->val);
        }
        solve(root->left,k);
        solve(root->right,k);
    }
    bool findTarget(TreeNode* root, int k) {
       solve(root, k);
       return ans;
    }
};