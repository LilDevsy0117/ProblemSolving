#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int pos = 0;
    int idx = 0;
    while(myString.find(pat, pos) != string::npos){
        pos = myString.find(pat, pos) + pat.size();
    } 
    for(int i = 0; i<pos; i++){
        answer += myString[i];
    }
    return answer;
}