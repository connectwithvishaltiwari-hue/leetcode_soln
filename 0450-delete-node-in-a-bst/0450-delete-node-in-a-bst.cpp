class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        int a = 0;
        if (root == nullptr) {
            return nullptr;
        }
        if (root->val == key) {
            TreeNode* dummy = rootdel(root->left, root->right);
            delete root;
            return dummy;
        }
        if (root->left == nullptr && root->right == nullptr &&
            root->val == key) {
            delete root;
            return nullptr;
        }
        solve(root, key, &a);
        return root;
    }

    void solve(TreeNode* root, int key, int* a) {

        if (root == nullptr || *a == 1) {
            return;
        }

        if (root->right != nullptr && root->right->val == key) {
            TreeNode* dummy = root->right;
            root->right = rootdel(dummy->left, dummy->right);
            delete dummy;
            *a = 1;
            return;
        }

        if (root->left != nullptr && root->left->val == key) {
            TreeNode* dummy = root->left;
            root->left = rootdel(dummy->left, dummy->right);
            delete dummy;
            *a = 1;
            return;
        }

        solve(root->left, key, a);

        if (*a != 1) {
            solve(root->right, key, a);
        }
    }
    TreeNode* rootdel(TreeNode* left, TreeNode* right) {

        if (left == nullptr)
            return right;
        if (right == nullptr)
            return left;

        TreeNode* temp = right;

        while (temp->left != nullptr) {
            temp = temp->left;
        }

        temp->left = left;

        return right;
    }
};