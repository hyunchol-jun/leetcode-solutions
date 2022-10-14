class Solution {
public:
    string removeOuterParentheses(string s) {
    std::string result;
    int opened = 0;
    int startIndex = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') ++opened;
        if (s[i] == ')') --opened;

        if (opened == 0) {
            result += s.substr(startIndex + 1, i - startIndex - 1);
            startIndex = i + 1;
        }
    }

    return result;

    }
};