#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    for(auto it : s){
        if(count(s.begin(), s.end(), it) == 1){
            answer += it;
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}