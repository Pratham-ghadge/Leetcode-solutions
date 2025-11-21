/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> result;

        if (root == nullptr) {
            return result;
        }

        queue<TreeNode*> queue;
        queue.push(root);
        bool righttoleft = true;

        while (!queue.empty()) {
            int size = queue.size();
            vector<int> row(size);
            for (int i = 0; i < size; i++) {
                TreeNode* Node = queue.front();
                queue.pop();

                int index =( righttoleft ) ? i :(size - 1 - i);

                row[index] = Node-> val;

                if(Node-> left){
                    queue.push(Node-> left);
                }
                if(Node -> right){
                    queue.push(Node->right);
                }

                
            }

            result.push_back(row);
            righttoleft = !righttoleft;

        }

        return result;
    }
};