#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(int i = 0; i<s1.size(); i++){
        if(count(s2.begin(), s2.end(), s1[i]) > 0){
            answer ++;
        }
    }
    return answer;
}