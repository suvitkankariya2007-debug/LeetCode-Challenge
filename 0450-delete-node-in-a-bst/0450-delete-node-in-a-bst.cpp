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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        return root;
        if(root->val<key)
        root->right=deleteNode(root->right,key);//next node called
        else if(root->val>key)
        root->left=deleteNode(root->left,key);
        else
        {
            if(root->left==nullptr)
            return root->right;//i must call for right then attach to the parent root
            if(root->right==nullptr)
            return root->left;
            //if there are no empty nodes on both sides
            TreeNode*s=root->right;
            while(s->left!=NULL)
            {
                s=s->left;
            }
            root->val=s->val;
            //again call for deleteing the original node
           root->right= deleteNode(root->right,s->val);


        }return root;
        
    }
};