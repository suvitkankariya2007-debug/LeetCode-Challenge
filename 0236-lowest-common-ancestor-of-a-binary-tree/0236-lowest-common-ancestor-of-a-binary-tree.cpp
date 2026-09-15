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
         if(root==NULL||root==p||root==q)//base case if i find any of these in left or right subtree i must immediately give access to parent call
       return root;
       TreeNode*lef=lowestCommonAncestor(root->left,p,q);
       TreeNode*rig=lowestCommonAncestor(root->right,p,q);
       if(lef==nullptr)
       return rig;
       else if(rig==nullptr)
       return lef;
       else
       return root;
      

        
    }
};