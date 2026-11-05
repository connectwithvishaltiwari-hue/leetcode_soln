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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        int a = checkSum(root, targetSum, sum);
        return a;
    }
    int checkSum(TreeNode* root, int targetSum, int sum){
        if(root == nullptr){
            return 0;
        }
        sum += root->val;
        if(root->left == nullptr && root->right == nullptr){
            if(sum == targetSum){
                return 1;
            }return 0;
        }int a = checkSum(root->left, targetSum, sum);
        int b = checkSum(root->right, targetSum, sum);
        return a || b;
    }
};