class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int N = nums.size();
		for (int i = 0; i < N-1; i++)
			for (int j = i+1; j < N; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					vector <int> result;
					result.push_back(i);
					result.push_back(j);
					return(result);
				}
			}
    }
};