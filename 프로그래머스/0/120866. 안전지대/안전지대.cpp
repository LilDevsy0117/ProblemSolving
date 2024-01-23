#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    for(int i = 0; i<board.size(); i++){
        for(int j = 0; j<board.size(); j++){
            if(board[i][j] == 1){
                if(i>0){
                    board[i-1][j] = (board[i-1][j] == 1)? 1 : 2;
                    if(j>0){
                        board[i-1][j-1] = (board[i-1][j-1] == 1)? 1 : 2;
                    }
                    if(j<board.size()-1){
                        board[i-1][j+1] = (board[i-1][j+1] == 1)? 1 : 2;
                    }
                }
                if(i<board.size()-1){
                    board[i+1][j] = (board[i+1][j] == 1)? 1 : 2;
                    if(j>0){
                        board[i+1][j-1] = (board[i+1][j-1] == 1)? 1 : 2;
                    }
                    if(j<board.size()-1){
                        board[i+1][j+1] = (board[i+1][j+1] == 1)? 1 : 2;
                    }
                }
                if(j>0){
                    board[i][j-1] = (board[i][j-1] == 1)? 1 : 2;
                }
                if(j<board.size()-1){
                    board[i][j+1] = (board[i][j+1] == 1)? 1 : 2;
                }
            }
        }
    }
    for(int i = 0; i<board.size(); i++){
        for(int j = 0; j<board.size(); j++){
            if(board[i][j] == 0){
                answer ++;
            }
        }
    }
    return answer;
}