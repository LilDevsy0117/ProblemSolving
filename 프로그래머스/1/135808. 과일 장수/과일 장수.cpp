#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end());
    for(int i = score.size()%m; i<score.size(); i+=m){
        answer += score[i]*m;
    }
    return answer;
}