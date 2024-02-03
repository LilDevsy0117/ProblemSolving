#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int d = 0;
    for(int i = 1; i<num; i++){
        d += i;
    }
    #등차수열로 계산
    int a = (total - d)/num;
    for(int i =0; i<num; i++){
        answer.push_back(a + i);
    }
    return answer;
}
