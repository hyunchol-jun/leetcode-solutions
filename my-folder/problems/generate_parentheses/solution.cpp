class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        recursionParen(result, "", n, 0);
        return result;
    }
private:
    void recursionParen(vector<string>& result, std::string str, int n, int m) {
        if (n == 0 && m == 0) {
            result.push_back(str);
            return;
        }
        if (n > 0)
            recursionParen(result, str + "(", n - 1, m + 1);
        if (m > 0)
            recursionParen(result, str + ")", n, m - 1);
        return;
    }    
};