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
    bool isValidBST(TreeNode* root) {
        return solve(root, LLONG_MIN, LLONG_MAX);
    }
    bool solve(TreeNode* root, long long low, long long max){
        if(root == nullptr){
            return true;
        }if(root->val <= low || root->val >= max){
            return false;
        }
        return solve(root->left, low, root->val) && solve(root->right, root->val, max);
    }
};