class TicTacToe {
private:
    int n;
    vector<vector<int>> cnt;

public:
    TicTacToe(int n)
        : n(n)
        , cnt(2, vector<int>((n << 1) + 2, 0)) {
    }

    int move(int row, int col, int player) {
        vector<int>& cur = cnt[player - 1];
        ++cur[row];
        ++cur[n + col];
        if (row == col) {
            ++cur[n << 1];
        }
        if (row + col == n - 1) {
            ++cur[n << 1 | 1];
        }
        if (cur[row] == n || cur[n + col] == n || cur[n << 1] == n || cur[n << 1 | 1] == n) {
            return player;
        }
        return 0;
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */