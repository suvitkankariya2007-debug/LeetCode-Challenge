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
TreeNode* successor(TreeNode* root)
{TreeNode*temp=root->right;
    while(temp!=NULL&&temp->left!=NULL)
    {
        temp=temp->left;
    }return temp;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        return root;
        if(root->val<key)
        root->right=deleteNode(root->right,key);//next node called
        else if(root->val>key)
        root->left=deleteNode(root->left,key);
        else
        {  TreeNode*temp;
            //for leaf node 
            if(root->left==NULL){
           temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
          temp=root->left;
            delete root;
            return temp;
        }//if both are  not null
        //find inorder successsor
        else
        {
              TreeNode*succ=successor(root);
        root->val=succ->val;
      
        root->right=deleteNode(root->right,succ->val);
        }
        }return root;
    }
};