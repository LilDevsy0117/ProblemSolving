#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    string word;
    vector<int> v;
    while(getline(ss, word, ' ')){
        v.push_back(stoi(word));
    }
    answer += to_string(*min_element(v.begin(), v.end()));
    answer+= ' ';
    answer += to_string(*max_element(v.begin(), v.end()));
    return answer;
}