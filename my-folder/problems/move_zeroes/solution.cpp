class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        for (int lastSortedIndex = 0, i = 0; i < size; ++i)
        {
            if (nums[i] != 0)
                swap(nums[lastSortedIndex++], nums[i]);
        }
    }
};