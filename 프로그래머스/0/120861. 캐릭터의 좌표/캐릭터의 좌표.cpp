#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2);
    int w = (board[0]-1)/2;
    int h = (board[1]-1)/2;
    for(int i = 0; i<keyinput.size(); i++){
        if(keyinput[i] == "left" && answer[0] > -1*w){
            answer[0]--;
        }else if(keyinput[i] == "right" && answer[0] < w){
            answer[0] ++;
        }else if(keyinput[i] == "up" && answer[1] < h){
            answer[1] ++;
        }else if(keyinput[i] == "down" && answer[1] > -1*h){
            answer[1] --;
        }
    }
    return answer;
}