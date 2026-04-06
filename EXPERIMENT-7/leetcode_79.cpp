class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, string& word, int k) {
        if (k == word.size()) return true;
        if (i<0||j< 0||i>= board.size()||j>= board[0].size() || board[i][j] != word[k])
            return false;
        char temp = board[i][j];
        board[i][j] = '#';
        bool found = dfs(board, i+1, j, word, k+1) ||
                     dfs(board, i-1, j, word, k+1) ||
                     dfs(board, i, j+1, word, k+1) ||
                     dfs(board, i, j-1, word, k+1);
        board[i][j] = temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, i, j, word, 0)) return true;
            }
        }
        return false;
    }
};
