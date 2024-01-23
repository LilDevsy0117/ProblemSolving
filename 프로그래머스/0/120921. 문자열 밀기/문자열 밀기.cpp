#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    string b = B + B;
    if(b.find(A) != string::npos){
        answer = b.find(A);
    }else{
        answer = -1;
    }
    return answer;
}