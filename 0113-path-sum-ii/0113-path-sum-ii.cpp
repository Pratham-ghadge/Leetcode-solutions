class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;

    void dfs(TreeNode* root, int targetSum) {
        if (root == nullptr) return;

        // Choose
        path.push_back(root->val);

        // Check condition at leaf
        if (root->left == nullptr && root->right == nullptr &&
            root->val == targetSum) {
            result.push_back(path);
        }

        // Explore
        dfs(root->left, targetSum - root->val);
        dfs(root->right, targetSum - root->val);

        // Un-choose (BACKTRACK)
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return result;
    }
};
