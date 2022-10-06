/**
 * @param {string[]} strs
 * @return {string}
 */

var longestCommonPrefix = function(strs) {
    let logestCommonPrefex = "";

    for (let i = 0; i < strs[0].length; i++) {
        logestCommonPrefex += strs[0][i];

        for (let j = 0; j < strs.length - 1; j++) {
            if (strs[j][i] !== strs[j + 1][i]) {
                return logestCommonPrefex.slice(0, -1);
            }
        }
    }

    return logestCommonPrefex;
};