#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max_v = max(sides[0], sides[1]);
    int min_v = min(sides[0], sides[1]);
    answer += sides[0]+sides[1] - max_v -1;
    for(int i = max_v-min_v+1; i<=max_v; i++){
        answer++;
    }
    return answer;
}