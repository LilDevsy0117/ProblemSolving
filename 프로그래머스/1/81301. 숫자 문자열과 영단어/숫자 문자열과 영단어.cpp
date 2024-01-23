#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(string s) {
    string answer = "";
    vector<string> v{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string temp = "";
    for(int i = 0; i<s.size(); i++){
        if(isdigit(s[i])){
            answer += s[i];
        }else{
            temp+=s[i];
            if(find(v.begin(), v.end(), temp) != v.end()){
                answer += to_string(find(v.begin(), v.end(), temp)-v.begin());
                temp = "";
            }
        }
    }
    int a = stoi(answer);
    return a;
}