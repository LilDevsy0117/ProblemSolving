#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;
vector<string> words = {"A","E","I","O","U"};
void go(int len, string s){
    if(len == 5){
        v.push_back(s);
        return;
    }
    if(s.size() == 0){
        go(len+1, s);
        for(int i = 0; i<words.size(); i++){
            s += words[i];
            go(len +1, s);
            s.pop_back();
        }
    }else{
        for(int i = 0; i<words.size(); i++){
            s += words[i];
            go(len +1, s);
            s.pop_back();
        }
    }
}

int solution(string word) {
    int answer = 0;
    
    string s = "";
    go(0,s);
    sort(v.begin(), v.end());
    answer = find(v.begin(), v.end(), word) - v.begin();
    
    return answer;
}