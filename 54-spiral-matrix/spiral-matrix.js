/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
    
      const m = matrix.length;
    const n = matrix[0].length;

    const res = [];

    // Initialize boundaries
    let top = 0, bottom = m - 1, left = 0, right = n - 1;

    // Iterate until all elements are printed
    while (top <= bottom && left <= right) {

        // Print top row from left to right
        for (let i = left; i <= right; ++i) {
            res.push(matrix[top][i]);
        }
        top++;

        // Print right column from top to bottom
        for (let i = top; i <= bottom; ++i) {
            res.push(matrix[i][right]);
        }
        right--;

        // Print bottom row from right to left (if exists)
        if (top <= bottom) {
            for (let i = right; i >= left; --i) {
                res.push(matrix[bottom][i]);
            }
            bottom--;
        }

        // Print left column from bottom to top (if exists)
        if (left <= right) {
            for (let i = bottom; i >= top; --i) {
                res.push(matrix[i][left]);
            }
            left++;
        }
    }

    return res;

};