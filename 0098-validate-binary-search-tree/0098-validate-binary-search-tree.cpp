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
long max=LONG_MAX;
long min=LONG_MIN;
bool check(TreeNode*root,long max,long min)
{if(root==NULL)
return true;

      
        if(min>=root->val||root->val>=max)//is wrong 5 > 4 > INT_MAX
        {
            return false;
            

        }return check(root->right,max,root->val) && check(root->left,root->val,min);

}

    bool isValidBST(TreeNode* root) {
        
        return check(root,max,min);

      
     


        
    }
};