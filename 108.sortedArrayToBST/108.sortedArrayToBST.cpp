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
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        switch(nums.size())
        {
            case 0:
        {
            return NULL;
        }
            case 1:
        {
            TreeNode* root;
            root=(TreeNode*)malloc(sizeof(TreeNode)) ;		//为新生成的root分配空间，这步很重要
            root->val=nums[0];
            root->left=NULL;
            root->right=NULL;
            return root;
        }
            case 2:
        {
            TreeNode* root1;
            TreeNode* root;
            //TreeNode* temp;
            root=(TreeNode*)malloc(sizeof(TreeNode)) ;
            root->val=nums[0];
            root1=(TreeNode*)malloc(sizeof(TreeNode)) ;
            root1->val=nums[1];
            root->left=NULL;
            root->right=root1;
            root1->left=NULL;
            root1->right=NULL;
            return root;
        }
        default:
        {
        TreeNode *final;
        final=(TreeNode*)malloc(sizeof(TreeNode)) ;
        int flag=0;
        if(nums.size()%2==1)
        {
            flag=nums.size()/2;
        }
        else
        {
            flag=nums.size()/2-1;
        }
        final->val=nums[flag];
        vector<int> temp1;
        vector<int> temp2;
        temp1.assign(nums.begin(),nums.begin()+flag);
        temp2.assign(nums.begin()+flag+1,nums.end());
        final->left=sortedArrayToBST(temp1);
        final->right=sortedArrayToBST(temp2);
        return final;
        }
        }
    }
};