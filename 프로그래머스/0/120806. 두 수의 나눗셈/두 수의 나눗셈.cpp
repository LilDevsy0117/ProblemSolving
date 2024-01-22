#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    answer = (double)num1/num2*1000;
    answer = (int)answer;
    return answer;
}