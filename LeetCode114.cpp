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
    void myuse(TreeNode *root,vector<TreeNode*> &v)
    {
        v.push_back(root);
        if(root->left)
            myuse(root->left,v);
        if(root->right)
            myuse(root->right,v);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> v;
        if(root)
        {
            myuse(root,v);
            for(int i=1;i<v.size();++i)
            {
                root->left=nullptr;
                root->right=v[i];
                root=root->right;
            }
            root=v[0];
        }
        else
            return;
    }
};