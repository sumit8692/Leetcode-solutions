class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) { //O(m) O(1)
        int n = 3;
        int col = 0; //no need to let it be an array of n size, cause we're only concerned with the col involved in the last move which is the move that caused the win
        int row = 0; //no need to let it be an array of n size, cause we're only concerned with the row involved in the last move which is the move that caused the win
        int diag1 = 0;
        int diag2 = 0;
        int target_row = moves.back()[0];
        int target_col = moves.back()[1];
        int player = 1;
        for(const auto& move : moves) {
            if(move[0] == target_row && abs((row += player)) == n)
                return row == n ? "A" : "B";
            if(move[1] == target_col && abs((col += player)) == n)
                return col == n ? "A" : "B";
            if(abs(diag1 += (move[0] == move[1] ? player : 0)) == n)
                return diag1 == n ? "A" : "B";
            if(abs(diag2 += (move[0] + move[1] == n-1 ? player : 0)) == n)
                return diag2 == n ? "A" : "B";
            player *= -1;
        }
        return moves.size() == n*n ? "Draw" : "Pending";
    }
};