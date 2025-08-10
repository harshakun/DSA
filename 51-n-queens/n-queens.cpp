#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> solutions;
    int n;

    void backtrack(int row, vector<string>& board, vector<int>& col,
                   vector<int>& diag1, vector<int>& diag2) {
        if (row == n) {
            solutions.push_back(board);
            return;
        }
        for (int c = 0; c < n; c++) {
            if (col[c] || diag1[row - c + n - 1] || diag2[row + c])
                continue;
            // Place queen
            board[row][c] = 'Q';
            col[c] = diag1[row - c + n - 1] = diag2[row + c] = 1;

            backtrack(row + 1, board, col, diag1, diag2);

            // Remove queen (backtrack)
            board[row][c] = '.';
            col[c] = diag1[row - c + n - 1] = diag2[row + c] = 0;
        }
    }

    vector<vector<string>> solveNQueens(int N) {
        n = N;
        solutions.clear();
        vector<string> board(n, string(n, '.'));
        vector<int> col(n, 0), diag1(2 * n - 1, 0), diag2(2 * n - 1, 0);
        backtrack(0, board, col, diag1, diag2);
        return solutions;
    }
};
