class Solution {
public:
    bool poss(vector<vector<char>>& board, string word, int row, int col, int f,
              int m, int n) {
        if (f == word.size())
            return true;

        if (f < word.size()) {
            if ((row - 1) >= 0 and board[row - 1][col] == word[f]) {
                char p = board[row - 1][col];
                board[row - 1][col] = '!';
                if (poss(board, word, row - 1, col, f + 1, m, n))
                    return true;
                board[row - 1][col] = p;
            } else if ((col - 1) >= 0 and board[row][col - 1] == word[f]) {
                char p = board[row][col - 1];
                board[row][col - 1] = '!';
                if (poss(board, word, row, col - 1, f + 1, m, n))
                    return true;
                board[row][col - 1] = p;
            } else if ((col + 1) < n and board[row][col + 1] == word[f]) {
                char p = board[row][col + 1];
                board[row][col + 1] = '!';
                if (poss(board, word, row, col + 1, f + 1, m, n))
                    return true;
                board[row][col + 1] = p;
            } else if ((row + 1) < m and board[row + 1][col] == word[f]) {
                char p = board[row + 1][col];
                board[row + 1][col] = '!';
                if (poss(board, word, row + 1, col, f + 1, m, n))
                    return true;
                board[row + 1][col] = p;
            } else
                return false;
        }
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int k = 0;
                if (board[i][j] == word[k]) {
                    char c = board[i][j];
                    board[i][j] = '!';
                    if (poss(board, word, i, j, k + 1, m, n)) {
                        return true;
                    }
                    board[i][j] = c;
                }
            }
        }
        return false;
    }
};