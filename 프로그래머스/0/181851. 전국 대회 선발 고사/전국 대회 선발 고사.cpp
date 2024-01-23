#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    int cnt = 0;
    int a = 1;
    int b = 10000;
    while(cnt != 3){
        auto it = find(rank.begin(), rank.end(), a);
        if(attendance[it - rank.begin()]){
            cnt ++;
            answer += b*(it - rank.begin());
            b /= 100;
        }
        a++;
    }
    return answer;
}