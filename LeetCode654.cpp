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
    TreeNode* build(vector<int>& nums,int lo,int hi)
    {
        if(lo>=hi)
            return nullptr;
        int index=-1;
        int maxdata=-1;
        for(int i=lo;i<hi;++i)
        {
            if(nums[i]>maxdata)
            {
                index=i;
                maxdata=nums[i];
            }
        }
        TreeNode *re=new TreeNode(maxdata);
        re->left=build(nums,lo,index);
        re->right=build(nums,index+1,hi);
        return re;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums,0,nums.size());
    }
};