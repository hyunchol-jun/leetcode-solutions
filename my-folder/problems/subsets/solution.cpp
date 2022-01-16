class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result {{}};
        
        for (auto num : nums)
        {
            size_t resultSize = result.size();
            for (int i = 0; i < resultSize; ++i)
            {
                result.push_back(result[i]);
                result.back().push_back(num);
            }
        }
        return result;
    }


};