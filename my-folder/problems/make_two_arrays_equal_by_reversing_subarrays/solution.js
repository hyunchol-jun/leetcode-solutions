/**
 * @param {number[]} target
 * @param {number[]} arr
 * @return {boolean}
 */
var canBeEqual = function(target, arr) {
    const sortedTarget = [...target].sort();
    const sortedArr = [...arr].sort();

    return sortedTarget.length === sortedArr.length && sortedTarget.every((elem, index) => {
        return elem === sortedArr[index];
    })
};