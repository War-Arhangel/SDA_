class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node = new TreeNode(val);
        if (!root) return node;

        TreeNode* cur = root;
        while (true) {
            if (val < cur->val) {
                if (!cur->left) {
                    cur->left = node;
                    break;
                }
                cur = cur->left;
            } else {
                if (!cur->right) {
                    cur->right = node;
                    break;
                }
                cur = cur->right;
            }
        }
        return root;
    }
};