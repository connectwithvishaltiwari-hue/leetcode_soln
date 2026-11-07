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
        vector<TreeNode*> a;
        vector<TreeNode*> b;
        lca(root, p, a);
        lca(root, q, b);
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < b.size(); j++) {
                if (a[i] == b[j]) {
                    return a[i];
                }
            }
        }
        return nullptr;
    }
    bool lca(TreeNode* root, TreeNode* p, vector<TreeNode*>& a) {
        if (root == nullptr) {
            return false;
        }

        if (root == p) {
            a.push_back(root);
            return true;
        }

        if (lca(root->left, p, a)) {
            a.push_back(root);
            return true;
        }

        if (lca(root->right, p, a)) {
            a.push_back(root);
            return true;
        }

        return false;
    }
};