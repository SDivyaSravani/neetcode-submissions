class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_map<int,int>>row;
        unordered_map<int,unordered_map<int,int>>col;
        unordered_map<int,unordered_map<int,int>>sq;
        int n = board.size();
        int m = board[0].size();
        bool isValid = true;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(row[i].find(board[i][j])==row[i].end()){
                    row[i][board[i][j]]++;
                }else{
                    return false;
                }
                if(col[j].find(board[i][j])==col[j].end()){
                    col[j][board[i][j]]++;
                }else{
                    return false;
                }
                int e = (i/3)*3 + (j/3);
                if(sq[e].find(board[i][j])==sq[e].end()){
                    sq[e][board[i][j]]++;
                }else{
                    return false;
                }
            }
        }
        return isValid;
    }
};
