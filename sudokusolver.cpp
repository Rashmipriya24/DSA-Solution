#include <bits/stdc++.h>
using namespace std;

// Function declarations
bool solve(vector<vector<char>>& board);
bool isvalid(vector<vector<char>>& board, int row, int col, char c);

void solveSudoku(vector<vector<char>>& board) {
    solve(board);
}

bool solve(vector<vector<char>>& board) {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {

            // If empty cell found
            if(board[i][j] == '.') {

                // Try digits 1 to 9
                for(char c = '1'; c <= '9'; c++) {
                    if(isvalid(board, i, j, c)) {
                        board[i][j] = c;

                        if(solve(board))
                            return true;

                        // Backtrack
                        board[i][j] = '.';
                    }
                }

                return false;   // no number fits here
            }
        }
    }

    return true;    // solved
}

bool isvalid(vector<vector<char>>& board, int row, int col, char c) {
    for(int i = 0; i < 9; i++) {

        // row check
        if(board[row][i] == c)
            return false;

        // column check
        if(board[i][col] == c)
            return false;

        // 3x3 subgrid check
        int subRow = 3 * (row / 3) + (i / 3);
        int subCol = 3 * (col / 3) + (i % 3);

        if(board[subRow][subCol] == c)
            return false;
    }

    return true;
}

int main() {
    vector<vector<char>> board(9, vector<char>(9));

    // Input Sudoku grid
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> board[i][j];
        }
    }

    solveSudoku(board);

    // Print solved board
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
