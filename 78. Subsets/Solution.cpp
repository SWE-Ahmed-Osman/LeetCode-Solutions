class Solution
{
private:
    void backtrack(vector<vector<int>> &possibleSubsets, vector<int> newSubsets, vector<int> &nums, int start)
    {
        possibleSubsets.push_back(newSubsets);

        for (int i = start; i < nums.size(); ++i)
        {
            newSubsets.push_back(nums[i]);
            backtrack(possibleSubsets, newSubsets, nums, i + 1);
            newSubsets.pop_back();
        }
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> possibleSubsets;
        backtrack(possibleSubsets, {}, nums, 0);
        return possibleSubsets;
    }
};
