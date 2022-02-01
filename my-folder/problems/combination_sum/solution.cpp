class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        vector<vector<int>> result {};
        vector<int> combination {};
        recursiveSum(result, candidates, target, combination, 0);
        return result;
    }
private:
    void recursiveSum(vector<vector<int>>& result, vector<int>& candidates, int target, vector<int>& combination, int begin) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }
        auto size = candidates.size();
        for (int i = begin; i < size && target > 0; ++i) {
            combination.push_back(candidates[i]);
            recursiveSum(result, candidates, target - candidates[i], combination, i);
            combination.pop_back();
        }
    }
};