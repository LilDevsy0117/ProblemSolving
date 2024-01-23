#include <string>
#include <vector>
#include <cctype>
using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size() == 4 || s.size() == 6){
        answer = true;
    }else{
        answer = false;
        return answer;
    }
    for(int i =0; i<s.size(); i++){
        if(isdigit(s[i]) == 0){
            answer = false;
            break;
        }
    }
    return answer;
}