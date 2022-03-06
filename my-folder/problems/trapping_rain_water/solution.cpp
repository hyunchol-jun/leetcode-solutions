class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int ans{};
        vector<int> left(size);
        vector<int> right(size);
        left[0] = height[0];
        right[size-1] = height[size-1];
        
        for (int i = 1; i < size; ++i)
        {
            if (height[i] > left[i-1])
            {
                left[i] = height[i];
            } else 
            {
                left[i] = left[i-1];
            }
        }
        
        for (int j = size-2; j >= 0; --j)
        {
            if (height[j] > right[j+1])
            {
                right[j] = height[j];
            } else
            {
                right[j] = right[j+1];
            }
        }
        
        for (int k = 0; k < size; ++k)
        {
            ans += (min(left[k], right[k]) - height[k]);
        }
        return ans;
    }
};