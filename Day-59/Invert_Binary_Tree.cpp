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
void SwapTree(TreeNode* root){
    if(root == NULL){
        return;
    }
    swap(root->left, root->right);
    SwapTree(root->left);
    SwapTree(root->right);
}
    TreeNode* invertTree(TreeNode* root) {
        SwapTree(root);
        return root;
    }
};
