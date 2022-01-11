class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result {};
        if (nums.size() == 1)
        {
            result.push_back(nums);
            return result;
        }
            
        
        for (int i = 0; i < nums.size(); ++i)
        {
            vector<int> copy {nums};
            copy.erase(copy.begin()+i);
            auto copy_perm = permute(copy);
            for (int j = 0; j < copy_perm.size(); ++j)
            {
                copy_perm[j].push_back(nums[i]);
                result.push_back(copy_perm[j]);
            }
        }
        return result;
    }
};