#include <algorithm>
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> result {};
        int lastOccurence[26] {};
        for (size_t i = 0; i < s.size(); ++i)
        {
            lastOccurence[s[i] - 'a'] = i;
        }
        size_t first = 0;
        size_t last = 0;
        for (size_t i = 0; i < s.size(); ++i)
        {
            if (lastOccurence[s[i] - 'a'] > last) last = lastOccurence[s[i] - 'a'];
            if (i == last)
            {
                result.push_back(last - first + 1);
                first = last + 1;
            }
        }
        return result;
    }
};