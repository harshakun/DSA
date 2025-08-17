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
    TreeNode* solve(vector<int>& postorder, vector<int>& inorder, int ps , int pe, int is, int ie,unordered_map<int,int>& mp)
    {
        if(ps>pe || is>ie) return nullptr;

        TreeNode* root = new TreeNode(postorder[pe]);
        int inpos = mp[root->val];
        int numleft = inpos - is;
        root->left = solve(postorder, inorder,ps,ps+numleft-1, is,inpos-1,mp);
        root->right = solve(postorder,inorder, ps+numleft,pe-1,inpos+1,ie, mp);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        for(int i =0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        return solve(postorder, inorder, 0 , postorder.size()-1,0,inorder.size()-1,mp);
        
    }
};