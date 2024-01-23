#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 1;
    for(int i = 0; i<dic.size(); i++){
        answer = 1;
        if(spell.size() != dic[i].size()){
            answer = 2;
            continue;
        }
        for(int j = 0; j<spell.size(); j++){
            if(dic[i].find(spell[j]) == string::npos){
                answer = 2;
                break;
            }
        }
        if(answer == 1){
            break;
        }
        
    }
    return answer;
}