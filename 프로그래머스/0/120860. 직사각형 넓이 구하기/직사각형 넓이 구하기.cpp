#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    sort(dots.begin(), dots.end());
    answer = (dots[0][1] - dots[1][1]) * (dots[2][0] - dots[1][0]);
    answer *= (answer <0) ? -1: 1;
    return answer;
}