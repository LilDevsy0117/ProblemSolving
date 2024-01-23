#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

string solution(string letter) {
    string answer = "";
    string word;
    stringstream ss(letter);
    vector<string> mos;
    while(getline(ss, word, ' ')){
        mos.push_back(word);
    }
    vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    for(int i = 0; i<mos.size(); i++){
        if(find(v.begin(), v.end(), mos[i]) != v.end()){
            answer += find(v.begin(), v.end(), mos[i]) - v.begin()+97;
        }
    }
    return answer;
}