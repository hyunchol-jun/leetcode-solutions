class Solution {
public:
    int countSubstrings(string s) {
        int length = s.length();
        int count = 0;
        for (int i = 0; i < length; ++i) {
            for (int l = i, r = i; l >= 0 && r < length && s[l] == s[r]; --l, ++r) ++count;
            for (int l = i, r = i + 1; l >= 0 && r < length && s[l] == s[r]; --l, ++r) ++count;
        }
        return count;
    }
};