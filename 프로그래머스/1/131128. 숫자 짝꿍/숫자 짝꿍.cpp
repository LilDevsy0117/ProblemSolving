#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int cnt = 0;
    for(int i = 9; i>=0; i--){
        cnt = min(count(X.begin(), X.end(), i+'0'), count(Y.begin(), Y.end(), i+'0'));
        for(int j = 0; j<cnt; j++){
            answer += to_string(i);
            if((i == 0) && (answer.size() == 1)) break;
        }
    }
    if(answer.size() == 0) answer += "-1";
    return answer;
}