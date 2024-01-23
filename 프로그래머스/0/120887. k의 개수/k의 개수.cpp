#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    char c = k+'0';
    for(int idx =i; idx <= j; idx++){
        string s = to_string(idx);
        
        answer += count(s.begin(), s.end(), c);
    }
    return answer;
}