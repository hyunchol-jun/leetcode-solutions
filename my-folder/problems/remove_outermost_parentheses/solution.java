class Solution {
    public String removeOuterParentheses(String s) {
        StringBuilder result = new StringBuilder();
        int opened = 0;
        int startIndex = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') opened++;
            if (s.charAt(i) == ')') opened--;

            if (opened == 0) {
                result.append(s.substring(startIndex + 1, i));
                startIndex = i + 1;
            }
        }

        return result.toString();

    }
}