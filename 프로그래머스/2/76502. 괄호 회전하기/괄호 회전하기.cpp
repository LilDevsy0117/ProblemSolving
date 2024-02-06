#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool correct(string s){
    vector<char> v;
    v.push_back(s[0]);
    for(int i = 1; i<s.size(); i++){
        if(v.back() == '(' && s[i] == ')'){
            v.pop_back();
        }else if(v.back() == '[' && s[i] == ']'){
            v.pop_back();
        }else if(v.back() == '{' && s[i] == '}'){
            v.pop_back();
        }else{
            v.push_back(s[i]);
        }
    }
    if(v.size() == 0) return true;
    else return false;
}

int solution(string s) {
    int answer = 0;
    if(correct(s)) answer++;
    for(int i = 1; i<s.size(); i++){
        rotate(s.begin(), s.begin()+1, s.end());
        if(correct(s)) {
            answer++;
        }
    }
    return answer;
}