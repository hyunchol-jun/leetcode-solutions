class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n {};
        size_t size {nums.size()};
        for (int i {0}; i < size; ++i)
        {
            n ^= nums[i];
        }
        return n;
    }
};