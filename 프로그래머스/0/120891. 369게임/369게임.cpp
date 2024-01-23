#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int order) {
    int answer = 0;
    string s = to_string(order);
    answer += count(s.begin(), s.end(), '3') +count(s.begin(), s.end(), '6') + count(s.begin(), s.end(), '9');
    return answer;
}