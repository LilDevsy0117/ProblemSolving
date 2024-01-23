#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    int idx = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    answer += to_string(idx);
    answer += "에 있다";
    return answer;
}