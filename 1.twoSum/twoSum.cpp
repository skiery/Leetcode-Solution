class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) 
	{
		unordered_map<int, int> mapp;
		vector<int>temp;
		for (int i=0;i<nums.size();i++)
		{
			if(mapp.count(target-nums[i]))
			{
				temp.push_back(mapp[target-nums[i]]);
				temp.push_back(i);
				break;
			}
			mapp[nums[i]]=i;
		}

		return temp;
	}
};