class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto size {nums.size()};
        vector<int> result(size, 1);
        for (int i = 1; i < size; ++i)
        {
            result[i] = result[i-1] * nums[i-1];
        }
        int reverse = 1;
        for (int j = size-1; j >= 0; --j)
        {
            result[j] *= reverse;
            reverse *= nums[j];
        }
        return result;
    }
};