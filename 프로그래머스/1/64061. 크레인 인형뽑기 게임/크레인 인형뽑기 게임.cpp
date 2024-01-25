#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> v;
    for(int i = 0; i<moves.size(); i++){
        for(int j = 0; j<board.size(); j++){
            if(board[j][moves[i]-1] != 0){
                v.push_back(board[j][moves[i]-1]);
                board[j][moves[i]-1] = 0;
                break;
            }
        }
        if(v.size()>1){
            if(v[v.size()-2] == v[v.size()-1]){
                answer++;
                answer++;
                v.pop_back();
                v.pop_back();
            }
        }
    }
    return answer;
}