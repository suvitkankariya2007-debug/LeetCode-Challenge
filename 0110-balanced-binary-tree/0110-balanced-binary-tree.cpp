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
int ht(TreeNode*root)
{
    if(root==nullptr)//base case
    return 0;
    return max(ht(root->left),ht(root->right))+1;

}
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
        return true;
        int lh=ht(root->left);//we are just seeing for the root node and its left and right sub trees
        int rh=ht(root->right);
        return abs(lh-rh)<=1 && isBalanced(root->left)&& isBalanced(root->right);

        
    }
};