class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int low = 0;
        int high = nums.size() - 1;
        
        int kthLargest {};
        while (true)
        {
            int index = partition(nums, low, high);
            if (index == k - 1)
            {
                return nums[index];
            } else if (index < k - 1)
            {
                low = index + 1;
            } else
            {
                high = index - 1;
            }
        }
        
    }
    
private:
    int partition(vector<int>& nums, int low, int high) 
    {
        int index = low;
        int pivot = high;
        
        for (int i = low; i < high; ++i)
        {
            if (nums[i] > nums[pivot])
            {
                swap(nums[i], nums[index]);
                ++index;
            }
        }
        swap(nums[index], nums[pivot]);
        return index;
    }
};