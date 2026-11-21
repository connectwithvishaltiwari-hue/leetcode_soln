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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> fin;
        if (root == nullptr){
            return fin;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int>res;
            int s = q.size();
            for(int i = 0; i < s; i++){
                TreeNode* tem = q.front();
                q.pop();
                res.push_back(tem->val);
                if(tem->left != nullptr){
                    q.push(tem->left);
                }if(tem->right != nullptr){
                    q.push(tem->right);
                }
            }fin.push_back(res);
        }return fin;
    }
};