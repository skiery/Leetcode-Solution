/*����һ�����������ж����Ƿ��Ǹ߶�ƽ��Ķ�������

	�����У�һ�ø߶�ƽ�����������Ϊ��

	һ��������ÿ���ڵ� ���������������ĸ߶Ȳ�ľ���ֵ������1��

	ʾ�� 1:

���������� [3,9,20,null,null,15,7]

3
	/ \
	9  20
	/  \
	15   7
	���� true ��

	ʾ�� 2:

���������� [1,2,2,3,3,null,null,4,4]

1
	/ \
	2   2
	/ \
	3   3
	/ \
	4   4
	���� false ��
*/



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
    bool isBalanced(TreeNode* root) 
    {
        if(!root)
            return true;
        if(root->left==NULL&&root->right==NULL)
        {
            return true;
        }
        else
        {
            if(abs(countNode(root->left)-countNode(root->right))>1)
            {
                return false;
            }
            else
            {
                if(isBalanced(root->left)&&isBalanced(root->right))
                {
                    return true;
                }
                else
                    return false;
            }
        }
    }
    int countNode(TreeNode* root)
    {
        if(!root)
            return 0;
        return 1+max(countNode(root->left),countNode(root->right));
    }
    
};

