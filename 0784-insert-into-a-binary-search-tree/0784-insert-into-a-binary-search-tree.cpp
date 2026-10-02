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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr)
        return new TreeNode(val);
        if(root->val<val)
        root->right= insertIntoBST(root->right,val);//"Go into the right subtree and return whatever that function gives me." is worng
       
        else
         root->left= insertIntoBST(root->left,val);
        //the cod doesnt attach it  to the tree
        return root;
    }
};