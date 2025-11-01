class Solution {
public:
    int ans = 0;  

    int height(TreeNode* root) {
        if (root == nullptr) return 0;

        int l = height(root->left);
        int r = height(root->right);

        ans = std::max(ans, l + r);

        return 1 + std::max(l, r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root); 
        return ans;    
    }
};
