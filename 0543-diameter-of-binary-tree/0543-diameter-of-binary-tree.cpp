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

    int diameter = 0;

    int height(TreeNode* node)
    {
        // Base case
        if(node == nullptr)
            return 0;

        // Find height of left subtree
        int lh = height(node->left);

        // Find height of right subtree
        int rh = height(node->right);

        // Longest path passing through current node
        diameter = max(diameter, lh + rh);

        // Return height of current node
        return max(lh, rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root)
    {
        height(root);

        return diameter;
    }
};