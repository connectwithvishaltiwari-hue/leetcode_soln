
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int idx = 1;
        int x = board.size() * board[0].size();

        if (word.size() > x) {
            return false;
        }

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == word[0]) {
                    int m = solve(board, word, i, j, idx);
                    if (m == 1) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    int solve(vector<vector<char>>& board, string word,
              int i, int j, int idx) {

        if (idx == word.size()) {
            return 1;
        }

        char temp = board[i][j];
        board[i][j] = '#';

        int m = 0, n = 0, o = 0, q = 0;

        if (j + 1 < board[0].size() &&
            board[i][j + 1] == word[idx] &&
            board[i][j + 1] != '#') {
            m = solve(board, word, i, j + 1, idx + 1);
        }

        if (i + 1 < board.size() &&
            board[i + 1][j] == word[idx] &&
            board[i + 1][j] != '#') {
            n = solve(board, word, i + 1, j, idx + 1);
        }

        if (i - 1 >= 0 &&
            board[i - 1][j] == word[idx] &&
            board[i - 1][j] != '#') {
            o = solve(board, word, i - 1, j, idx + 1);
        }

        if (j - 1 >= 0 &&
            board[i][j - 1] == word[idx] &&
            board[i][j - 1] != '#') {
            q = solve(board, word, i, j - 1, idx + 1);
        }

        board[i][j] = temp;

        if (m || n || o || q) {
            return 1;
        }

        return 0;
    }
};
