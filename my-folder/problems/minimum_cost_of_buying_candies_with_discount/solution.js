/**
 * @param {number[]} cost
 * @return {number}
 */
var minimumCost = function(cost) {
    const reverseSortedCost = [...cost].sort((a, b) => b - a);
    let minimumCost = 0;

    for (let i = 0; i < reverseSortedCost.length; i++) {
        if (i % 3 === 2) continue;
        minimumCost += reverseSortedCost[i];
    }

    return minimumCost;
};