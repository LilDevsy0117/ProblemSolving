#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> v3{3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    for(int i = 0; i<answers.size(); i++){
        if(v1[i%v1.size()] == answers[i]){
            score1++;
        }
        if(v2[i%v2.size()] == answers[i]){
            score2++;
        }
        if(v3[i%v3.size()] == answers[i]){
            score3++;
        }
    }
    int max = 0;
    if(max <= score1) max = score1;
    if(max <= score2) max = score2;
    if(max <= score3) max = score3;
    if(max == score1) answer.push_back(1);
    if(max == score2) answer.push_back(2);
    if(max == score3) answer.push_back(3);
    return answer;
}