#include <string>
#include <vector>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int pos = 0;
    while(myString.find(pat, pos) != string::npos){
        pos = myString.find(pat, pos) + 1;
        answer ++;
    }
    return answer;
}