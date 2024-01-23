#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i = 0; i<participant.size()-1; i++){
        if(participant[i] != completion[i]){
            answer += participant[i];
            break;
        }
        // if(count(participant.begin(), participant.end(), participant[i]) != count(completion.begin(), completion.end(), participant[i])){
        //     answer += participant[i];
        //     break;
        // }
    }
    if(answer.size() ==0 ){
        answer += participant[participant.size()-1];
    }
    return answer;
}