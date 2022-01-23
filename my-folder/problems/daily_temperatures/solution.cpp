class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        size_t size = temperatures.size();
        vector<int> result(size);
        for (int i {static_cast<int>(size-1)}; i >= 0; --i)
        {
            int j {i+1};
            while (j<size && temperatures[i]>=temperatures[j]) 
            {
                if (result[j] == 0)
                    j = size;
                else
                    j += result[j];
            }
            if (j < size)
                result[i] = j - i;
        }
        return result;
    }
};