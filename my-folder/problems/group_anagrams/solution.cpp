class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> strMap {};
        vector<vector<string>> result {};
        for (const auto& s : strs)
        {
            string t {s};
            sort(t.begin(), t.end());
            strMap[t].push_back(s);
        }
        result.reserve(strMap.size());
        for (const auto& m : strMap)
        {
            result.push_back(m.second);
        }
        return result;
    }

};