#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string word;
    stringstream ss(my_string);
    while (getline(ss, word, ' ')){
        if(word == ""){
            continue;
        }
        answer.push_back(word);
    }
    return answer;
}