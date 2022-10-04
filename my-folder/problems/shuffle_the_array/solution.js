/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    const firstHalf = nums.slice(0, n);
    const lastHalf = nums.slice(n);

    const output = [];

    for (let i = 0; i < n; i++) {
        output.push(firstHalf[i]);
        output.push(lastHalf[i]);
    }

    return output;
};