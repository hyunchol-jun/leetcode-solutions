class Solution {
public:
    string decodeString(string s) {
        int pos{};
        return helper(pos, s);
    }
private:
    string helper(int& pos, string& s)
    {
        int n{};
        string word{};
        
        for (;pos < s.size(); pos++)
        {
            char cur{s[pos]};
            if (isdigit(cur)) {
                n = n*10 + cur - '0';
            } else if (cur == '[') {
                string curStr = helper(++pos, s);
                for(;n>0;n--) word += curStr;
            } else if (cur == ']') {
                return word;
            } else {
                word += cur;
            }
        }
        return word;
    }
};