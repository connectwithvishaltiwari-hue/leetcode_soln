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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> fin;
        if(root == nullptr){
            return fin;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int>res;
            int s = q.size();
            for(int i = 0; i < s; i++){
                TreeNode* temp = q.front();
                q.pop();
                res.push_back(temp->val);
                if(temp->left != nullptr){
                    q.push(temp->left);
                }if(temp->right != nullptr){
                    q.push(temp->right);
                }
            }int n = res.size();
            fin.push_back(res[n-1]);
        }return fin;
    }
};