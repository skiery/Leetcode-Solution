/*����һ���Ǹ����� k������ k �� 33������������ǵĵ� k �С�
����������У�ÿ�����������Ϸ������Ϸ������ĺ͡�

ʾ��:

����: 3
���: [1,3,3,1]
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