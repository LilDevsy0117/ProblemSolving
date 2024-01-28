#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    if(s[0] == ')') return false;
    
    int cnt = 1;
    
    for(int i = 1; i<s.size(); i++){
        if(s[i] == ')'){
            if(cnt <= 0) return false;
            cnt--;
        }else{
            cnt++;
        }
    }
    if(cnt > 0) return false;

    return answer;
}