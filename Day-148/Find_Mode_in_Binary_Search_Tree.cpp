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
    void inorder(TreeNode* root, unordered_map<int,int> &mpp){
        if(root == NULL){
            return;
        }

        inorder(root->left, mpp);
        mpp[root->val]++;
        inorder(root->right, mpp);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mpp;

        inorder(root,mpp);
        int maxi = 0;
        for(auto it : mpp){
            maxi = max(maxi,it.second);
        }

        vector<int> res;

        for(auto it : mpp){
            if(maxi == it.second){
                res.push_back(it.first);
            }
        }
        return res;
    }
};
