class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result {};
        vector<string> elements {};
        recurPartition(s, result, elements, 0);
        return result;
    }

private:
    void recurPartition(string s, vector<vector<string>>& result, vector<string>& elements, int start) {
        int size = s.length();
        if (size <= start) {
            result.push_back(elements);
        }
        
        for (int end = start; end < size; ++end)
        {
            if (isPalindrome(s, start, end)) {
                elements.push_back(s.substr(start, end - start + 1));
                recurPartition(s, result, elements, end + 1);
                elements.pop_back();
            }
        }
    }
    
    bool isPalindrome(string& s, int low, int high) {
        while (low < high) {
            if (s[low++] != s[high--]) return false;
        }
        return true;
    }
};