#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string word = "";
    for(int i = 0; i<myString.size(); i++){
        if(myString[i] == 'x'){
            if(word.size()>0){
                answer.push_back(word);
            }
            word = "";
        }else{
            word += myString[i];
        }
    }
    if(word.size()>0){
        answer.push_back(word);
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}