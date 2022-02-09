class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m == 1 || n == 1) return 1;
        if (!grid[m-1][n-1])
        {
            grid[m-1][n-1] = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
        }
        return grid[m-1][n-1];
    }
private:
    int grid[100][100]{};
};