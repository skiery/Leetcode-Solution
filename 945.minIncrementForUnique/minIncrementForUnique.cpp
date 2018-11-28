class Solution {
public:
	int minIncrementForUnique(vector<int>& A)			//----使数组唯一最小增量hash表解决方法---//
	{
		int test[80000]={0};
		int count=0;
		for(int i=1;i<=A.size();i++)
		{
			if(test[A[i-1]]==0)
			{
				test[A[i-1]]=1;
			}
			else
			{
				for(int j=A[i-1]+1;j<80000;j++)
				{
					if(test[j]==0)
					{
						test[j]=1;
						count+=(j-A[i-1]);
						break;
					}
				}
			}
		}
		return count;
	}
};