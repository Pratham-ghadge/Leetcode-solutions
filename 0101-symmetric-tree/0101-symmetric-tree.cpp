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

bool isidentical(TreeNode* T1 , TreeNode* T2){
    if(T1 == nullptr || T2 == nullptr){
        return T1 == T2;
    }

    return T1->val == T2->val && isidentical(T1->left,T2->right) && isidentical(T1->right,T2->left);
}
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return isidentical(root->left,root->right);
        
    }
};