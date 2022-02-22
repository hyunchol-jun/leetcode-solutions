class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        auto smallOrEqual = [&](int cur) {
            int count = 0;
            for (auto &num: nums) {
                if (num <= cur)
                    ++count;
            }
            return count;
        };
        
        int low = 1, high = nums.size() - 1;
        int duplicate = -1;
        while (low <= high) {
            int cur = (low + high) / 2;
            
            if (smallOrEqual(cur) > cur) {
                duplicate = cur;
                high = cur - 1;
            } else {
                low = cur + 1;
            }
        }
        return duplicate;
    }
};