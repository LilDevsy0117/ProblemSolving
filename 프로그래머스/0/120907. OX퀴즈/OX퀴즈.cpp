#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(int i = 0; i<quiz.size(); i++){
        stringstream ss(quiz[i]);
        string first, op, second, equal, third;
        ss >> first >> op>> second >> equal >> third;
        if(op == "+"){
            if(stoi(first) + stoi(second) == stoi(third)){
                answer.push_back("O");
            }else{
                answer.push_back("X");
            }
        }else{
            if(stoi(first) - stoi(second) == stoi(third)){
                answer.push_back("O");
            }else{
                answer.push_back("X");
            }
        }
    }
    return answer;
}