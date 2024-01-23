#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(const auto it: to_string(n)){
        answer += it - '0';
    }
    return answer;
}