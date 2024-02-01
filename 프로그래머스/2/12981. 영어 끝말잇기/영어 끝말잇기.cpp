#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> v;
    v.push_back(words[0]);
    for(int i =1; i<words.size(); i++){
        if(words[i-1].back() != words[i][0]){
            answer.push_back(i%n + 1);
            answer.push_back(i/n + 1);
            break;
        }else{
            if(find(v.begin(), v.end(), words[i]) != v.end()){
                answer.push_back(i%n + 1);
                answer.push_back(i/n + 1);
                break;
            }
            v.push_back(words[i]);
        }
    }
    if(answer.size() == 0){
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}