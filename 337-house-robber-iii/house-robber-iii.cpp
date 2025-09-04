class Solution {
public:
    unordered_map<TreeNode*, int> robMemo, notRobMemo;

    int solve(TreeNode* root, bool canRob) {
        if (!root) return 0;

        if (canRob) {
            if (robMemo.count(root)) return robMemo[root];

            int rob = root->val + solve(root->left, false) + solve(root->right, false);
    
            int skip = solve(root->left, true) + solve(root->right, true);

            return robMemo[root] = max(rob, skip);
        } else {
            if (notRobMemo.count(root)) return notRobMemo[root];

            // Can't rob this node, must skip
            int skip = solve(root->left, true) + solve(root->right, true);

            return notRobMemo[root] = skip;
        }
    }

    int rob(TreeNode* root) {
        return solve(root, true);
    }
};
