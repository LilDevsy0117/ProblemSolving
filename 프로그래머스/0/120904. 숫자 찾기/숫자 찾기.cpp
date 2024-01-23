#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string s = to_string(num);
    answer = s.find(to_string(k));
    if(answer != -1)answer++;
    return answer;
}