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
void traverse(TreeNode*root,vector<int>&ans)//here if address is not passes then on returning from the 2nd function it woukld return the empty ans only
{  
    if(root==nullptr)
    return;
    if(root!=nullptr)
        {
     traverse(root->left,ans);
        ans.push_back(root->val);
         traverse(root->right,ans);
        }
}
    vector<int> inorderTraversal(TreeNode* root) {
      //each traversal creates a new vector
      //  return  NULL; wrong due to return retrurn type
     vector<int>ans;
     traverse(root,ans);
     return ans;
        
        }
    
};