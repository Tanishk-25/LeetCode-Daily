/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        if(root == p || root == q) return root;

        TreeNode* rs = lowestCommonAncestor(root->right,p,q);
        TreeNode* ls = lowestCommonAncestor(root->left,p,q);

        if(rs && ls) return root;
        if(ls) return ls;
        if(rs) return rs;
        return NULL;
    }
};
