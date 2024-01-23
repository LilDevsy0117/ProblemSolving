#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int i = 0; i<array.size(); i++){
        string s = to_string(array[i]);
        answer += count(s.begin(), s.end(), '7');
    }
    return answer;
}