class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result{};
        vector<string> path{};
        int size = s.size();
        recursiveBackTrack(s, result, path, 0);
        return result;
    }

private:
    void recursiveBackTrack(const std::string& s, vector<vector<string>>& result, vector<string>& path, int start)
    {
        if (start == s.size()) result.push_back(path);
        else
        {
            for (int i = start; i < s.size(); ++i)
            {
                if (isPalindrome(s, start, i))
                {
                    path.push_back(s.substr(start, i - start + 1));
                    recursiveBackTrack(s, result, path, i + 1);
                    path.pop_back();
                }
            }
        }
    }
    
    bool isPalindrome(const std::string& s, int l, int r)
    {
        while (l < r)
        {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }
};