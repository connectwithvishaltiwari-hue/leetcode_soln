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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> fin;
        if(root == nullptr){
            return fin;
        }
        stack<vector<int>> st;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> res;
            int s = q.size();
            for (int i = 0; i < s; i++) {
                TreeNode* temp = q.front();
                q.pop();
                res.push_back(temp->val);
                if (temp->left != nullptr) {
                    q.push(temp->left);
                }
                if (temp->right != nullptr) {
                    q.push(temp->right);
                }
            }
            st.push(res);
        }while(!st.empty()){
            fin.push_back(st.top());
            st.pop();
        }return fin;
    }
};