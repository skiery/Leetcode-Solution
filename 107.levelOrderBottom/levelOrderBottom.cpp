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
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> final;
        queue<TreeNode*> line;
        vector<int> temp;
        if(!root)
        {
            return final;
        }
        line.push(root);
        line.push(NULL);
        while(!line.empty())
        {
            TreeNode *now=line.front();
            line.pop();
            if(now)
            {
                temp.push_back(now->val);
                if(now->left)
                {
                    line.push(now->left);
                }
                if(now->right)
                {
                    line.push(now->right);
                }
            }
            else
            {
                final.push_back(temp);
                temp.clear();
                if(!line.empty())
                {
                    line.push(NULL);
                }
            }
        }
        reverse(final.begin(),final.end());
        return final;
    }
};