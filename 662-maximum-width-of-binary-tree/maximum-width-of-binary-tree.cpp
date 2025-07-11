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
    int widthOfBinaryTree(TreeNode* root) {
        if (root== nullptr) return 0;
        queue <pair<TreeNode*,int>> q;
         unsigned long long width = 1;
        q.push({root,0});
        while (!q.empty())
        {
            unsigned long long  size = q.size();
            unsigned long long miin = q.front().second;
            unsigned long long firstt,last;
            for (int i =0;i<size;i++)
            {
                unsigned long long  cur_id = q.front().second-miin;
                TreeNode* node = q.front().first;
                q.pop();
                if (i==0) firstt = cur_id;
                if (i == size-1) last = cur_id;
                if (node->left != nullptr) q.push({node->left, 2*cur_id+1});
                
                if (node->right != nullptr) q.push({node->right, 2*cur_id+2});
               
            } 
            width = max(width,last-firstt+1);
        }
        return width;
    }
};