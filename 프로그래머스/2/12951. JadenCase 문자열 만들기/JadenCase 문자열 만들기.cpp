#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    for(int i = 0; i<s.size(); i++){
        if(answer.size() == 0 || answer[answer.size()-1] == ' '){
            answer += toupper(s[i]);
        }else{
            answer += tolower(s[i]);
        }
    }
    
    
    return answer;
}