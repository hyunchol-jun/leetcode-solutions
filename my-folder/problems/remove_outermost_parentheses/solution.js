/**
 * @param {string} s
 * @return {string}
 */
var removeOuterParentheses = function(s) {
    let openParenCounter = 0;
    let startIndex = 0;
    let result = "";

        for (const c of s) {
        // Append open paren except for the start of primitive
        if (c === "(" && openParenCounter++ > 0) {
            result += c;
        }

        // Append close paren except for the end of primitive
        if (c === ")" && openParenCounter-- > 1) {
            result += c;
        }
    }

    return result;

};