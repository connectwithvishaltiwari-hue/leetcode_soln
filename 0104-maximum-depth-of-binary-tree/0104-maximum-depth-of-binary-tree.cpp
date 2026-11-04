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
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int c = 1;
        count(root, c, 1);
        return c;
    }
    void count(TreeNode* root, int &c, int level){
        if(root == nullptr){
            return;
        }
        if(c < level){
            c = level;
        }
        if(root->left == nullptr && root->right == nullptr){
            return;
        }else if(root->left != nullptr && root->right == nullptr){
            count(root->left,c, level+1);
        }else if(root->left == nullptr && root->right != nullptr){
            count(root->right,c, level+1);
        }else{
            count(root->left,c, level+1);
            count(root->right,c, level+1);
        }
    }
};