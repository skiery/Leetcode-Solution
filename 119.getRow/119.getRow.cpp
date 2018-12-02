/*给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
在杨辉三角中，每个数是它左上方和右上方的数的和。

示例:

输入: 3
输出: [1,3,3,1]
*/

class Solution {
public:
	vector<int> getRow(int rowIndex) 
	{
		if(rowIndex==0)
		{
			vector<int> temp;
			temp.push_back(1);
			return temp;
		}
		if(rowIndex==1)
		{
			vector<int> temp;
			temp.push_back(1);
			temp.push_back(1);
			return temp;
		}
		else
		{
			vector<int> final(rowIndex+1);
			vector<int> temp=getRow(rowIndex-1);
			final[0]=1;final[rowIndex]=1;
			for(int i=1;i<rowIndex;i++)
			{
				final[i]=temp[i-1]+temp[i];
			}
			return final;
		}
	}
};