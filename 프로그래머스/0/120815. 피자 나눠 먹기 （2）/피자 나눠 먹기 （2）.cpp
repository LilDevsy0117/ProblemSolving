#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
    int answer = 0;
    answer = (6*n/__gcd(6,n))/6;
    return answer;
}