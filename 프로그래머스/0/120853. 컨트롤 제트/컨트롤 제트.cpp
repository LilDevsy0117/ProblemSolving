#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    vector<string> v;
    string word;
    while(getline(ss, word, ' ')){
        v.push_back(word);
    }
    for(int i = 0; i<v.size(); i++){
        if(v[i] == "Z"){
            answer -= stoi(v[i-1]);
        }else if(v[i] != " "){
            answer += stoi(v[i]);
        }
    }
    return answer;
}