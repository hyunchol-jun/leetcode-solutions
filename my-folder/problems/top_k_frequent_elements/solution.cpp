class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {        
        map<int, int> count_map {};
        
        std::sort(nums.begin(), nums.end());       
        for (int i {0}; i < nums.size(); ++i) {
            ++count_map[nums[i]];
        }
        
        vector<pair<int, int>> result {};
        for (auto const&x : count_map) {
            result.push_back({x.first, x.second});
        }
        
        std::sort(result.begin(), result.end(), [](pair<int, int> p1, pair<int, int> p2) {
            return p1.second > p2.second;
        });
        
        vector<int> newVector {};
        for (int i {0}; i < result.size(); ++i) {
            newVector.push_back(result[i].first);
        }
        
        vector<int> subVector {newVector.begin(), newVector.begin() + k};
        return subVector;
    }
};